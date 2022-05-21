	.text
	.file	"devicetable-offsets.c"
	.globl	main                            # -- Begin function main
	.p2align	4, 0x90
	.type	main,@function
main:                                   # @main
# %bb.0:
	callq	__fentry__
	pushq	%rbp
	movq	%rsp, %rbp
	andq	$-8, %rsp
	#APP
	
.ascii "->SIZE_usb_device_id $32 sizeof(struct usb_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_usb_device_id_match_flags $0 offsetof(struct usb_device_id, match_flags)"
	#NO_APP
	#APP
	
.ascii "->OFF_usb_device_id_idVendor $2 offsetof(struct usb_device_id, idVendor)"
	#NO_APP
	#APP
	
.ascii "->OFF_usb_device_id_idProduct $4 offsetof(struct usb_device_id, idProduct)"
	#NO_APP
	#APP
	
.ascii "->OFF_usb_device_id_bcdDevice_lo $6 offsetof(struct usb_device_id, bcdDevice_lo)"
	#NO_APP
	#APP
	
.ascii "->OFF_usb_device_id_bcdDevice_hi $8 offsetof(struct usb_device_id, bcdDevice_hi)"
	#NO_APP
	#APP
	
.ascii "->OFF_usb_device_id_bDeviceClass $10 offsetof(struct usb_device_id, bDeviceClass)"
	#NO_APP
	#APP
	
.ascii "->OFF_usb_device_id_bDeviceSubClass $11 offsetof(struct usb_device_id, bDeviceSubClass)"
	#NO_APP
	#APP
	
.ascii "->OFF_usb_device_id_bDeviceProtocol $12 offsetof(struct usb_device_id, bDeviceProtocol)"
	#NO_APP
	#APP
	
.ascii "->OFF_usb_device_id_bInterfaceClass $13 offsetof(struct usb_device_id, bInterfaceClass)"
	#NO_APP
	#APP
	
.ascii "->OFF_usb_device_id_bInterfaceSubClass $14 offsetof(struct usb_device_id, bInterfaceSubClass)"
	#NO_APP
	#APP
	
.ascii "->OFF_usb_device_id_bInterfaceProtocol $15 offsetof(struct usb_device_id, bInterfaceProtocol)"
	#NO_APP
	#APP
	
.ascii "->OFF_usb_device_id_bInterfaceNumber $16 offsetof(struct usb_device_id, bInterfaceNumber)"
	#NO_APP
	#APP
	
.ascii "->SIZE_hid_device_id $24 sizeof(struct hid_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_hid_device_id_bus $0 offsetof(struct hid_device_id, bus)"
	#NO_APP
	#APP
	
.ascii "->OFF_hid_device_id_group $2 offsetof(struct hid_device_id, group)"
	#NO_APP
	#APP
	
.ascii "->OFF_hid_device_id_vendor $4 offsetof(struct hid_device_id, vendor)"
	#NO_APP
	#APP
	
.ascii "->OFF_hid_device_id_product $8 offsetof(struct hid_device_id, product)"
	#NO_APP
	#APP
	
.ascii "->SIZE_ieee1394_device_id $32 sizeof(struct ieee1394_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_ieee1394_device_id_match_flags $0 offsetof(struct ieee1394_device_id, match_flags)"
	#NO_APP
	#APP
	
.ascii "->OFF_ieee1394_device_id_vendor_id $4 offsetof(struct ieee1394_device_id, vendor_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_ieee1394_device_id_model_id $8 offsetof(struct ieee1394_device_id, model_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_ieee1394_device_id_specifier_id $12 offsetof(struct ieee1394_device_id, specifier_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_ieee1394_device_id_version $16 offsetof(struct ieee1394_device_id, version)"
	#NO_APP
	#APP
	
.ascii "->SIZE_pci_device_id $32 sizeof(struct pci_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_pci_device_id_vendor $0 offsetof(struct pci_device_id, vendor)"
	#NO_APP
	#APP
	
.ascii "->OFF_pci_device_id_device $4 offsetof(struct pci_device_id, device)"
	#NO_APP
	#APP
	
.ascii "->OFF_pci_device_id_subvendor $8 offsetof(struct pci_device_id, subvendor)"
	#NO_APP
	#APP
	
.ascii "->OFF_pci_device_id_subdevice $12 offsetof(struct pci_device_id, subdevice)"
	#NO_APP
	#APP
	
.ascii "->OFF_pci_device_id_class $16 offsetof(struct pci_device_id, class)"
	#NO_APP
	#APP
	
.ascii "->OFF_pci_device_id_class_mask $20 offsetof(struct pci_device_id, class_mask)"
	#NO_APP
	#APP
	
.ascii "->SIZE_ccw_device_id $16 sizeof(struct ccw_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_ccw_device_id_match_flags $0 offsetof(struct ccw_device_id, match_flags)"
	#NO_APP
	#APP
	
.ascii "->OFF_ccw_device_id_cu_type $2 offsetof(struct ccw_device_id, cu_type)"
	#NO_APP
	#APP
	
.ascii "->OFF_ccw_device_id_cu_model $6 offsetof(struct ccw_device_id, cu_model)"
	#NO_APP
	#APP
	
.ascii "->OFF_ccw_device_id_dev_type $4 offsetof(struct ccw_device_id, dev_type)"
	#NO_APP
	#APP
	
.ascii "->OFF_ccw_device_id_dev_model $7 offsetof(struct ccw_device_id, dev_model)"
	#NO_APP
	#APP
	
.ascii "->SIZE_ap_device_id $16 sizeof(struct ap_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_ap_device_id_dev_type $2 offsetof(struct ap_device_id, dev_type)"
	#NO_APP
	#APP
	
.ascii "->SIZE_css_device_id $16 sizeof(struct css_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_css_device_id_type $1 offsetof(struct css_device_id, type)"
	#NO_APP
	#APP
	
.ascii "->SIZE_serio_device_id $4 sizeof(struct serio_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_serio_device_id_type $0 offsetof(struct serio_device_id, type)"
	#NO_APP
	#APP
	
.ascii "->OFF_serio_device_id_proto $3 offsetof(struct serio_device_id, proto)"
	#NO_APP
	#APP
	
.ascii "->OFF_serio_device_id_id $2 offsetof(struct serio_device_id, id)"
	#NO_APP
	#APP
	
.ascii "->OFF_serio_device_id_extra $1 offsetof(struct serio_device_id, extra)"
	#NO_APP
	#APP
	
.ascii "->SIZE_acpi_device_id $32 sizeof(struct acpi_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_acpi_device_id_id $0 offsetof(struct acpi_device_id, id)"
	#NO_APP
	#APP
	
.ascii "->OFF_acpi_device_id_cls $24 offsetof(struct acpi_device_id, cls)"
	#NO_APP
	#APP
	
.ascii "->OFF_acpi_device_id_cls_msk $28 offsetof(struct acpi_device_id, cls_msk)"
	#NO_APP
	#APP
	
.ascii "->SIZE_pnp_device_id $16 sizeof(struct pnp_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_pnp_device_id_id $0 offsetof(struct pnp_device_id, id)"
	#NO_APP
	#APP
	
.ascii "->SIZE_pnp_card_device_id $80 sizeof(struct pnp_card_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_pnp_card_device_id_devs $16 offsetof(struct pnp_card_device_id, devs)"
	#NO_APP
	#APP
	
.ascii "->SIZE_pcmcia_device_id $80 sizeof(struct pcmcia_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_pcmcia_device_id_match_flags $0 offsetof(struct pcmcia_device_id, match_flags)"
	#NO_APP
	#APP
	
.ascii "->OFF_pcmcia_device_id_manf_id $2 offsetof(struct pcmcia_device_id, manf_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_pcmcia_device_id_card_id $4 offsetof(struct pcmcia_device_id, card_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_pcmcia_device_id_func_id $6 offsetof(struct pcmcia_device_id, func_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_pcmcia_device_id_function $7 offsetof(struct pcmcia_device_id, function)"
	#NO_APP
	#APP
	
.ascii "->OFF_pcmcia_device_id_device_no $8 offsetof(struct pcmcia_device_id, device_no)"
	#NO_APP
	#APP
	
.ascii "->OFF_pcmcia_device_id_prod_id_hash $12 offsetof(struct pcmcia_device_id, prod_id_hash)"
	#NO_APP
	#APP
	
.ascii "->SIZE_of_device_id $200 sizeof(struct of_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_of_device_id_name $0 offsetof(struct of_device_id, name)"
	#NO_APP
	#APP
	
.ascii "->OFF_of_device_id_type $32 offsetof(struct of_device_id, type)"
	#NO_APP
	#APP
	
.ascii "->OFF_of_device_id_compatible $64 offsetof(struct of_device_id, compatible)"
	#NO_APP
	#APP
	
.ascii "->SIZE_vio_device_id $64 sizeof(struct vio_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_vio_device_id_type $0 offsetof(struct vio_device_id, type)"
	#NO_APP
	#APP
	
.ascii "->OFF_vio_device_id_compat $32 offsetof(struct vio_device_id, compat)"
	#NO_APP
	#APP
	
.ascii "->SIZE_input_device_id $200 sizeof(struct input_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_input_device_id_flags $0 offsetof(struct input_device_id, flags)"
	#NO_APP
	#APP
	
.ascii "->OFF_input_device_id_bustype $8 offsetof(struct input_device_id, bustype)"
	#NO_APP
	#APP
	
.ascii "->OFF_input_device_id_vendor $10 offsetof(struct input_device_id, vendor)"
	#NO_APP
	#APP
	
.ascii "->OFF_input_device_id_product $12 offsetof(struct input_device_id, product)"
	#NO_APP
	#APP
	
.ascii "->OFF_input_device_id_version $14 offsetof(struct input_device_id, version)"
	#NO_APP
	#APP
	
.ascii "->OFF_input_device_id_evbit $16 offsetof(struct input_device_id, evbit)"
	#NO_APP
	#APP
	
.ascii "->OFF_input_device_id_keybit $24 offsetof(struct input_device_id, keybit)"
	#NO_APP
	#APP
	
.ascii "->OFF_input_device_id_relbit $120 offsetof(struct input_device_id, relbit)"
	#NO_APP
	#APP
	
.ascii "->OFF_input_device_id_absbit $128 offsetof(struct input_device_id, absbit)"
	#NO_APP
	#APP
	
.ascii "->OFF_input_device_id_mscbit $136 offsetof(struct input_device_id, mscbit)"
	#NO_APP
	#APP
	
.ascii "->OFF_input_device_id_ledbit $144 offsetof(struct input_device_id, ledbit)"
	#NO_APP
	#APP
	
.ascii "->OFF_input_device_id_sndbit $152 offsetof(struct input_device_id, sndbit)"
	#NO_APP
	#APP
	
.ascii "->OFF_input_device_id_ffbit $160 offsetof(struct input_device_id, ffbit)"
	#NO_APP
	#APP
	
.ascii "->OFF_input_device_id_swbit $176 offsetof(struct input_device_id, swbit)"
	#NO_APP
	#APP
	
.ascii "->SIZE_eisa_device_id $16 sizeof(struct eisa_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_eisa_device_id_sig $0 offsetof(struct eisa_device_id, sig)"
	#NO_APP
	#APP
	
.ascii "->SIZE_parisc_device_id $8 sizeof(struct parisc_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_parisc_device_id_hw_type $0 offsetof(struct parisc_device_id, hw_type)"
	#NO_APP
	#APP
	
.ascii "->OFF_parisc_device_id_hversion $2 offsetof(struct parisc_device_id, hversion)"
	#NO_APP
	#APP
	
.ascii "->OFF_parisc_device_id_hversion_rev $1 offsetof(struct parisc_device_id, hversion_rev)"
	#NO_APP
	#APP
	
.ascii "->OFF_parisc_device_id_sversion $4 offsetof(struct parisc_device_id, sversion)"
	#NO_APP
	#APP
	
.ascii "->SIZE_sdio_device_id $16 sizeof(struct sdio_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_sdio_device_id_class $0 offsetof(struct sdio_device_id, class)"
	#NO_APP
	#APP
	
.ascii "->OFF_sdio_device_id_vendor $2 offsetof(struct sdio_device_id, vendor)"
	#NO_APP
	#APP
	
.ascii "->OFF_sdio_device_id_device $4 offsetof(struct sdio_device_id, device)"
	#NO_APP
	#APP
	
.ascii "->SIZE_ssb_device_id $6 sizeof(struct ssb_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_ssb_device_id_vendor $0 offsetof(struct ssb_device_id, vendor)"
	#NO_APP
	#APP
	
.ascii "->OFF_ssb_device_id_coreid $2 offsetof(struct ssb_device_id, coreid)"
	#NO_APP
	#APP
	
.ascii "->OFF_ssb_device_id_revision $4 offsetof(struct ssb_device_id, revision)"
	#NO_APP
	#APP
	
.ascii "->SIZE_bcma_device_id $6 sizeof(struct bcma_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_bcma_device_id_manuf $0 offsetof(struct bcma_device_id, manuf)"
	#NO_APP
	#APP
	
.ascii "->OFF_bcma_device_id_id $2 offsetof(struct bcma_device_id, id)"
	#NO_APP
	#APP
	
.ascii "->OFF_bcma_device_id_rev $4 offsetof(struct bcma_device_id, rev)"
	#NO_APP
	#APP
	
.ascii "->OFF_bcma_device_id_class $5 offsetof(struct bcma_device_id, class)"
	#NO_APP
	#APP
	
.ascii "->SIZE_virtio_device_id $8 sizeof(struct virtio_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_virtio_device_id_device $0 offsetof(struct virtio_device_id, device)"
	#NO_APP
	#APP
	
.ascii "->OFF_virtio_device_id_vendor $4 offsetof(struct virtio_device_id, vendor)"
	#NO_APP
	#APP
	
.ascii "->SIZE_hv_vmbus_device_id $24 sizeof(struct hv_vmbus_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_hv_vmbus_device_id_guid $0 offsetof(struct hv_vmbus_device_id, guid)"
	#NO_APP
	#APP
	
.ascii "->SIZE_rpmsg_device_id $32 sizeof(struct rpmsg_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_rpmsg_device_id_name $0 offsetof(struct rpmsg_device_id, name)"
	#NO_APP
	#APP
	
.ascii "->SIZE_i2c_device_id $32 sizeof(struct i2c_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_i2c_device_id_name $0 offsetof(struct i2c_device_id, name)"
	#NO_APP
	#APP
	
.ascii "->SIZE_i3c_device_id $16 sizeof(struct i3c_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_i3c_device_id_match_flags $0 offsetof(struct i3c_device_id, match_flags)"
	#NO_APP
	#APP
	
.ascii "->OFF_i3c_device_id_dcr $1 offsetof(struct i3c_device_id, dcr)"
	#NO_APP
	#APP
	
.ascii "->OFF_i3c_device_id_manuf_id $2 offsetof(struct i3c_device_id, manuf_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_i3c_device_id_part_id $4 offsetof(struct i3c_device_id, part_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_i3c_device_id_extra_info $6 offsetof(struct i3c_device_id, extra_info)"
	#NO_APP
	#APP
	
.ascii "->SIZE_spi_device_id $40 sizeof(struct spi_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_spi_device_id_name $0 offsetof(struct spi_device_id, name)"
	#NO_APP
	#APP
	
.ascii "->SIZE_dmi_system_id $344 sizeof(struct dmi_system_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_dmi_system_id_matches $16 offsetof(struct dmi_system_id, matches)"
	#NO_APP
	#APP
	
.ascii "->SIZE_platform_device_id $32 sizeof(struct platform_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_platform_device_id_name $0 offsetof(struct platform_device_id, name)"
	#NO_APP
	#APP
	
.ascii "->SIZE_mdio_device_id $8 sizeof(struct mdio_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_mdio_device_id_phy_id $0 offsetof(struct mdio_device_id, phy_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_mdio_device_id_phy_id_mask $4 offsetof(struct mdio_device_id, phy_id_mask)"
	#NO_APP
	#APP
	
.ascii "->SIZE_zorro_device_id $16 sizeof(struct zorro_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_zorro_device_id_id $0 offsetof(struct zorro_device_id, id)"
	#NO_APP
	#APP
	
.ascii "->SIZE_isapnp_device_id $16 sizeof(struct isapnp_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_isapnp_device_id_vendor $4 offsetof(struct isapnp_device_id, vendor)"
	#NO_APP
	#APP
	
.ascii "->OFF_isapnp_device_id_function $6 offsetof(struct isapnp_device_id, function)"
	#NO_APP
	#APP
	
.ascii "->SIZE_ipack_device_id $12 sizeof(struct ipack_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_ipack_device_id_format $0 offsetof(struct ipack_device_id, format)"
	#NO_APP
	#APP
	
.ascii "->OFF_ipack_device_id_vendor $4 offsetof(struct ipack_device_id, vendor)"
	#NO_APP
	#APP
	
.ascii "->OFF_ipack_device_id_device $8 offsetof(struct ipack_device_id, device)"
	#NO_APP
	#APP
	
.ascii "->SIZE_amba_id $16 sizeof(struct amba_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_amba_id_id $0 offsetof(struct amba_id, id)"
	#NO_APP
	#APP
	
.ascii "->OFF_amba_id_mask $4 offsetof(struct amba_id, mask)"
	#NO_APP
	#APP
	
.ascii "->SIZE_mips_cdmm_device_id $1 sizeof(struct mips_cdmm_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_mips_cdmm_device_id_type $0 offsetof(struct mips_cdmm_device_id, type)"
	#NO_APP
	#APP
	
.ascii "->SIZE_x86_cpu_id $24 sizeof(struct x86_cpu_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_x86_cpu_id_feature $8 offsetof(struct x86_cpu_id, feature)"
	#NO_APP
	#APP
	
.ascii "->OFF_x86_cpu_id_family $2 offsetof(struct x86_cpu_id, family)"
	#NO_APP
	#APP
	
.ascii "->OFF_x86_cpu_id_model $4 offsetof(struct x86_cpu_id, model)"
	#NO_APP
	#APP
	
.ascii "->OFF_x86_cpu_id_vendor $0 offsetof(struct x86_cpu_id, vendor)"
	#NO_APP
	#APP
	
.ascii "->SIZE_cpu_feature $2 sizeof(struct cpu_feature)"
	#NO_APP
	#APP
	
.ascii "->OFF_cpu_feature_feature $0 offsetof(struct cpu_feature, feature)"
	#NO_APP
	#APP
	
.ascii "->SIZE_mei_cl_device_id $64 sizeof(struct mei_cl_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_mei_cl_device_id_name $0 offsetof(struct mei_cl_device_id, name)"
	#NO_APP
	#APP
	
.ascii "->OFF_mei_cl_device_id_uuid $32 offsetof(struct mei_cl_device_id, uuid)"
	#NO_APP
	#APP
	
.ascii "->OFF_mei_cl_device_id_version $48 offsetof(struct mei_cl_device_id, version)"
	#NO_APP
	#APP
	
.ascii "->SIZE_rio_device_id $8 sizeof(struct rio_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_rio_device_id_did $0 offsetof(struct rio_device_id, did)"
	#NO_APP
	#APP
	
.ascii "->OFF_rio_device_id_vid $2 offsetof(struct rio_device_id, vid)"
	#NO_APP
	#APP
	
.ascii "->OFF_rio_device_id_asm_did $4 offsetof(struct rio_device_id, asm_did)"
	#NO_APP
	#APP
	
.ascii "->OFF_rio_device_id_asm_vid $6 offsetof(struct rio_device_id, asm_vid)"
	#NO_APP
	#APP
	
.ascii "->SIZE_ulpi_device_id $16 sizeof(struct ulpi_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_ulpi_device_id_vendor $0 offsetof(struct ulpi_device_id, vendor)"
	#NO_APP
	#APP
	
.ascii "->OFF_ulpi_device_id_product $2 offsetof(struct ulpi_device_id, product)"
	#NO_APP
	#APP
	
.ascii "->SIZE_hda_device_id $32 sizeof(struct hda_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_hda_device_id_vendor_id $0 offsetof(struct hda_device_id, vendor_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_hda_device_id_rev_id $4 offsetof(struct hda_device_id, rev_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_hda_device_id_api_version $8 offsetof(struct hda_device_id, api_version)"
	#NO_APP
	#APP
	
.ascii "->SIZE_sdw_device_id $16 sizeof(struct sdw_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_sdw_device_id_mfg_id $0 offsetof(struct sdw_device_id, mfg_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_sdw_device_id_part_id $2 offsetof(struct sdw_device_id, part_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_sdw_device_id_sdw_version $4 offsetof(struct sdw_device_id, sdw_version)"
	#NO_APP
	#APP
	
.ascii "->OFF_sdw_device_id_class_id $5 offsetof(struct sdw_device_id, class_id)"
	#NO_APP
	#APP
	
.ascii "->SIZE_fsl_mc_device_id $18 sizeof(struct fsl_mc_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_fsl_mc_device_id_vendor $0 offsetof(struct fsl_mc_device_id, vendor)"
	#NO_APP
	#APP
	
.ascii "->OFF_fsl_mc_device_id_obj_type $2 offsetof(struct fsl_mc_device_id, obj_type)"
	#NO_APP
	#APP
	
.ascii "->SIZE_tb_service_id $40 sizeof(struct tb_service_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_tb_service_id_match_flags $0 offsetof(struct tb_service_id, match_flags)"
	#NO_APP
	#APP
	
.ascii "->OFF_tb_service_id_protocol_key $4 offsetof(struct tb_service_id, protocol_key)"
	#NO_APP
	#APP
	
.ascii "->OFF_tb_service_id_protocol_id $16 offsetof(struct tb_service_id, protocol_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_tb_service_id_protocol_version $20 offsetof(struct tb_service_id, protocol_version)"
	#NO_APP
	#APP
	
.ascii "->OFF_tb_service_id_protocol_revision $24 offsetof(struct tb_service_id, protocol_revision)"
	#NO_APP
	#APP
	
.ascii "->SIZE_typec_device_id $16 sizeof(struct typec_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_typec_device_id_svid $0 offsetof(struct typec_device_id, svid)"
	#NO_APP
	#APP
	
.ascii "->OFF_typec_device_id_mode $2 offsetof(struct typec_device_id, mode)"
	#NO_APP
	#APP
	
.ascii "->SIZE_tee_client_device_id $16 sizeof(struct tee_client_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_tee_client_device_id_uuid $0 offsetof(struct tee_client_device_id, uuid)"
	#NO_APP
	#APP
	
.ascii "->SIZE_wmi_device_id $48 sizeof(struct wmi_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_wmi_device_id_guid_string $0 offsetof(struct wmi_device_id, guid_string)"
	#NO_APP
	#APP
	
.ascii "->SIZE_mhi_device_id $40 sizeof(struct mhi_device_id)"
	#NO_APP
	#APP
	
.ascii "->OFF_mhi_device_id_chan $0 offsetof(struct mhi_device_id, chan)"
	#NO_APP
	xorl	%eax, %eax
	movq	%rbp, %rsp
	popq	%rbp
	retq
.Lfunc_end0:
	.size	main, .Lfunc_end0-main
                                        # -- End function
	.ident	"Ubuntu clang version 12.0.1-++20211102090516+fed41342a82f-1~exp1~20211102211019.11"
	.section	".note.GNU-stack","",@progbits
