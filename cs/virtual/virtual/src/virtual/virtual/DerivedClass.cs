// �����l�ƕ���������h���N���X
class DerivedClass : BaseClass  // BaseClass�̔h���N���XDeriveClass�̒�`.
{

    // ���\�b�h�̒�`
    // ����������
    public DerivedClass()
        : base()   // �R���X�g���N�^DerivedClass()�̒�`.(�e�N���X�̃R���X�g���N�^���Ă�.)
    {

    }

    // ����������(�w��̒l���Z�b�g.)
    public DerivedClass(int i, string str)
        : base(i, str)   // �R���X�g���N�^DerivedClass(int i, string str)�̒�`.(�e�N���X�̃R���X�g���N�^(�����t��)���Ă�.)
    {

    }

    // �e�t�B�[���h���o��.
    override public void Output()    // ���\�b�hOutput�̒�`(override�Őe�N���X�̃��\�b�h���I�[�o�[���C�h����.)
    {
        // �t�B�[���h�̒l���o��.
        System.Console.WriteLine("(i, str) = (" + i + ", " + str + ")");    //i��str�̒l���o��.
    }

}