/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/trademark/model/QueryTradeMarkApplicationDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

QueryTradeMarkApplicationDetailResult::QueryTradeMarkApplicationDetailResult() :
	ServiceResult()
{}

QueryTradeMarkApplicationDetailResult::QueryTradeMarkApplicationDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTradeMarkApplicationDetailResult::~QueryTradeMarkApplicationDetailResult()
{}

void QueryTradeMarkApplicationDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allThirdClassificationNode = value["ThirdClassification"]["ThirdClassifications"];
	for (auto valueThirdClassificationThirdClassifications : allThirdClassificationNode)
	{
		ThirdClassifications thirdClassificationObject;
		if(!valueThirdClassificationThirdClassifications["Code"].isNull())
			thirdClassificationObject.code = valueThirdClassificationThirdClassifications["Code"].asString();
		if(!valueThirdClassificationThirdClassifications["Name"].isNull())
			thirdClassificationObject.name = valueThirdClassificationThirdClassifications["Name"].asString();
		thirdClassification_.push_back(thirdClassificationObject);
	}
	auto allSupplementsNode = value["Supplements"]["SupplementsItem"];
	for (auto valueSupplementsSupplementsItem : allSupplementsNode)
	{
		SupplementsItem supplementsObject;
		if(!valueSupplementsSupplementsItem["Id"].isNull())
			supplementsObject.id = std::stol(valueSupplementsSupplementsItem["Id"].asString());
		if(!valueSupplementsSupplementsItem["SerialNumber"].isNull())
			supplementsObject.serialNumber = valueSupplementsSupplementsItem["SerialNumber"].asString();
		if(!valueSupplementsSupplementsItem["Type"].isNull())
			supplementsObject.type = std::stoi(valueSupplementsSupplementsItem["Type"].asString());
		if(!valueSupplementsSupplementsItem["Status"].isNull())
			supplementsObject.status = std::stoi(valueSupplementsSupplementsItem["Status"].asString());
		if(!valueSupplementsSupplementsItem["OrderId"].isNull())
			supplementsObject.orderId = valueSupplementsSupplementsItem["OrderId"].asString();
		if(!valueSupplementsSupplementsItem["TmNumber"].isNull())
			supplementsObject.tmNumber = valueSupplementsSupplementsItem["TmNumber"].asString();
		if(!valueSupplementsSupplementsItem["SendTime"].isNull())
			supplementsObject.sendTime = std::stol(valueSupplementsSupplementsItem["SendTime"].asString());
		if(!valueSupplementsSupplementsItem["AcceptTime"].isNull())
			supplementsObject.acceptTime = std::stol(valueSupplementsSupplementsItem["AcceptTime"].asString());
		if(!valueSupplementsSupplementsItem["SbjDeadTime"].isNull())
			supplementsObject.sbjDeadTime = std::stol(valueSupplementsSupplementsItem["SbjDeadTime"].asString());
		if(!valueSupplementsSupplementsItem["AcceptDeadTime"].isNull())
			supplementsObject.acceptDeadTime = std::stol(valueSupplementsSupplementsItem["AcceptDeadTime"].asString());
		if(!valueSupplementsSupplementsItem["UploadFileTemplateUrl"].isNull())
			supplementsObject.uploadFileTemplateUrl = valueSupplementsSupplementsItem["UploadFileTemplateUrl"].asString();
		if(!valueSupplementsSupplementsItem["Content"].isNull())
			supplementsObject.content = valueSupplementsSupplementsItem["Content"].asString();
		if(!valueSupplementsSupplementsItem["BatchNum"].isNull())
			supplementsObject.batchNum = valueSupplementsSupplementsItem["BatchNum"].asString();
		if(!valueSupplementsSupplementsItem["OperateTime"].isNull())
			supplementsObject.operateTime = std::stol(valueSupplementsSupplementsItem["OperateTime"].asString());
		auto allFileTemplateUrls = value["FileTemplateUrls"]["FileTemplateUrls"];
		for (auto value : allFileTemplateUrls)
			supplementsObject.fileTemplateUrls.push_back(value.asString());
		supplements_.push_back(supplementsObject);
	}
	auto adminUploadsNode = value["AdminUploads"];
	if(!adminUploadsNode["LoaPicUrl"].isNull())
		adminUploads_.loaPicUrl = adminUploadsNode["LoaPicUrl"].asString();
	if(!adminUploadsNode["LicensePicUrl"].isNull())
		adminUploads_.licensePicUrl = adminUploadsNode["LicensePicUrl"].asString();
	auto materialDetailNode = value["MaterialDetail"];
	if(!materialDetailNode["CardNumber"].isNull())
		materialDetail_.cardNumber = materialDetailNode["CardNumber"].asString();
	if(!materialDetailNode["ContactAddress"].isNull())
		materialDetail_.contactAddress = materialDetailNode["ContactAddress"].asString();
	if(!materialDetailNode["Status"].isNull())
		materialDetail_.status = std::stoi(materialDetailNode["Status"].asString());
	if(!materialDetailNode["EName"].isNull())
		materialDetail_.eName = materialDetailNode["EName"].asString();
	if(!materialDetailNode["Address"].isNull())
		materialDetail_.address = materialDetailNode["Address"].asString();
	if(!materialDetailNode["LoaUrl"].isNull())
		materialDetail_.loaUrl = materialDetailNode["LoaUrl"].asString();
	if(!materialDetailNode["City"].isNull())
		materialDetail_.city = materialDetailNode["City"].asString();
	if(!materialDetailNode["PassportUrl"].isNull())
		materialDetail_.passportUrl = materialDetailNode["PassportUrl"].asString();
	if(!materialDetailNode["Province"].isNull())
		materialDetail_.province = materialDetailNode["Province"].asString();
	if(!materialDetailNode["EAddress"].isNull())
		materialDetail_.eAddress = materialDetailNode["EAddress"].asString();
	if(!materialDetailNode["Name"].isNull())
		materialDetail_.name = materialDetailNode["Name"].asString();
	if(!materialDetailNode["IdCardUrl"].isNull())
		materialDetail_.idCardUrl = materialDetailNode["IdCardUrl"].asString();
	if(!materialDetailNode["BusinessLicenceUrl"].isNull())
		materialDetail_.businessLicenceUrl = materialDetailNode["BusinessLicenceUrl"].asString();
	if(!materialDetailNode["Type"].isNull())
		materialDetail_.type = std::stoi(materialDetailNode["Type"].asString());
	if(!materialDetailNode["ExpirationDate"].isNull())
		materialDetail_.expirationDate = materialDetailNode["ExpirationDate"].asString();
	if(!materialDetailNode["ContactZipcode"].isNull())
		materialDetail_.contactZipcode = materialDetailNode["ContactZipcode"].asString();
	if(!materialDetailNode["Town"].isNull())
		materialDetail_.town = materialDetailNode["Town"].asString();
	if(!materialDetailNode["ContactNumber"].isNull())
		materialDetail_.contactNumber = materialDetailNode["ContactNumber"].asString();
	if(!materialDetailNode["ContactEmail"].isNull())
		materialDetail_.contactEmail = materialDetailNode["ContactEmail"].asString();
	if(!materialDetailNode["Country"].isNull())
		materialDetail_.country = materialDetailNode["Country"].asString();
	if(!materialDetailNode["Region"].isNull())
		materialDetail_.region = std::stoi(materialDetailNode["Region"].asString());
	if(!materialDetailNode["ContactName"].isNull())
		materialDetail_.contactName = materialDetailNode["ContactName"].asString();
	if(!materialDetailNode["LegalNoticeUrl"].isNull())
		materialDetail_.legalNoticeUrl = materialDetailNode["LegalNoticeUrl"].asString();
	if(!materialDetailNode["ReviewApplicationFile"].isNull())
		materialDetail_.reviewApplicationFile = materialDetailNode["ReviewApplicationFile"].asString();
		auto allReviewAdditionalFiles = materialDetailNode["ReviewAdditionalFiles"]["ReviewAdditionalFile"];
		for (auto value : allReviewAdditionalFiles)
			materialDetail_.reviewAdditionalFiles.push_back(value.asString());
	auto firstClassificationNode = value["FirstClassification"];
	if(!firstClassificationNode["Code"].isNull())
		firstClassification_.code = firstClassificationNode["Code"].asString();
	if(!firstClassificationNode["Name"].isNull())
		firstClassification_.name = firstClassificationNode["Name"].asString();
	auto renewResponseNode = value["RenewResponse"];
	if(!renewResponseNode["Name"].isNull())
		renewResponse_.name = renewResponseNode["Name"].asString();
	if(!renewResponseNode["EngName"].isNull())
		renewResponse_.engName = renewResponseNode["EngName"].asString();
	if(!renewResponseNode["Address"].isNull())
		renewResponse_.address = renewResponseNode["Address"].asString();
	if(!renewResponseNode["EngAddress"].isNull())
		renewResponse_.engAddress = renewResponseNode["EngAddress"].asString();
	if(!renewResponseNode["RegisterTime"].isNull())
		renewResponse_.registerTime = std::stol(renewResponseNode["RegisterTime"].asString());
	if(!renewResponseNode["SubmitSbjtime"].isNull())
		renewResponse_.submitSbjtime = std::stol(renewResponseNode["SubmitSbjtime"].asString());
	auto reviewOfficialFilesNode = value["ReviewOfficialFiles"];
	if(!reviewOfficialFilesNode["ReviewAudit"].isNull())
		reviewOfficialFiles_.reviewAudit = reviewOfficialFilesNode["ReviewAudit"].asString();
	if(!reviewOfficialFilesNode["ReviewPass"].isNull())
		reviewOfficialFiles_.reviewPass = reviewOfficialFilesNode["ReviewPass"].asString();
	if(!reviewOfficialFilesNode["ReviewKeep"].isNull())
		reviewOfficialFiles_.reviewKeep = reviewOfficialFilesNode["ReviewKeep"].asString();
	if(!reviewOfficialFilesNode["ReviewPart"].isNull())
		reviewOfficialFiles_.reviewPart = reviewOfficialFilesNode["ReviewPart"].asString();
		auto allReviewSupplements = reviewOfficialFilesNode["ReviewSupplements"]["ReviewSupplement"];
		for (auto value : allReviewSupplements)
			reviewOfficialFiles_.reviewSupplements.push_back(value.asString());
	auto allReceiptUrl = value["ReceiptUrl"]["ReceiptUrl"];
	for (const auto &item : allReceiptUrl)
		receiptUrl_.push_back(item.asString());
	auto allJudgeResultUrl = value["JudgeResultUrl"]["JudgeResultUrl"];
	for (const auto &item : allJudgeResultUrl)
		judgeResultUrl_.push_back(item.asString());
	auto allFlags = value["Flags"]["Flag"];
	for (const auto &item : allFlags)
		flags_.push_back(item.asString());
	if(!value["Status"].isNull())
		status_ = std::stoi(value["Status"].asString());
	if(!value["LoaUrl"].isNull())
		loaUrl_ = value["LoaUrl"].asString();
	if(!value["OrderPrice"].isNull())
		orderPrice_ = std::stof(value["OrderPrice"].asString());
	if(!value["TmIcon"].isNull())
		tmIcon_ = value["TmIcon"].asString();
	if(!value["OrderId"].isNull())
		orderId_ = value["OrderId"].asString();
	if(!value["Type"].isNull())
		type_ = std::stoi(value["Type"].asString());
	if(!value["TmNameType"].isNull())
		tmNameType_ = std::stoi(value["TmNameType"].asString());
	if(!value["TmName"].isNull())
		tmName_ = value["TmName"].asString();
	if(!value["BizId"].isNull())
		bizId_ = value["BizId"].asString();
	if(!value["GrayIconUrl"].isNull())
		grayIconUrl_ = value["GrayIconUrl"].asString();
	if(!value["Note"].isNull())
		note_ = value["Note"].asString();
	if(!value["TmNumber"].isNull())
		tmNumber_ = value["TmNumber"].asString();
	if(!value["AcceptUrl"].isNull())
		acceptUrl_ = value["AcceptUrl"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = std::stol(value["CreateTime"].asString());
	if(!value["UpdateTime"].isNull())
		updateTime_ = std::stol(value["UpdateTime"].asString());
	if(!value["ExtendInfo"].isNull())
		extendInfo_ = value["ExtendInfo"].asString();
	if(!value["SendSbjLogistics"].isNull())
		sendSbjLogistics_ = value["SendSbjLogistics"].asString();
	if(!value["SendUserLogistics"].isNull())
		sendUserLogistics_ = value["SendUserLogistics"].asString();
	if(!value["RecvUserLogistics"].isNull())
		recvUserLogistics_ = value["RecvUserLogistics"].asString();
	if(!value["MaterialId"].isNull())
		materialId_ = std::stol(value["MaterialId"].asString());
	if(!value["TotalPrice"].isNull())
		totalPrice_ = std::stof(value["TotalPrice"].asString());
	if(!value["ServicePrice"].isNull())
		servicePrice_ = std::stof(value["ServicePrice"].asString());
	if(!value["PartnerCode"].isNull())
		partnerCode_ = value["PartnerCode"].asString();
	if(!value["PartnerMobile"].isNull())
		partnerMobile_ = value["PartnerMobile"].asString();
	if(!value["NotAcceptUrl"].isNull())
		notAcceptUrl_ = value["NotAcceptUrl"].asString();
	if(!value["PartnerName"].isNull())
		partnerName_ = value["PartnerName"].asString();

}

QueryTradeMarkApplicationDetailResult::FirstClassification QueryTradeMarkApplicationDetailResult::getFirstClassification()const
{
	return firstClassification_;
}

std::vector<std::string> QueryTradeMarkApplicationDetailResult::getJudgeResultUrl()const
{
	return judgeResultUrl_;
}

std::string QueryTradeMarkApplicationDetailResult::getLoaUrl()const
{
	return loaUrl_;
}

std::vector<std::string> QueryTradeMarkApplicationDetailResult::getReceiptUrl()const
{
	return receiptUrl_;
}

std::string QueryTradeMarkApplicationDetailResult::getTmIcon()const
{
	return tmIcon_;
}

std::string QueryTradeMarkApplicationDetailResult::getPartnerCode()const
{
	return partnerCode_;
}

std::string QueryTradeMarkApplicationDetailResult::getAcceptUrl()const
{
	return acceptUrl_;
}

std::string QueryTradeMarkApplicationDetailResult::getSendSbjLogistics()const
{
	return sendSbjLogistics_;
}

int QueryTradeMarkApplicationDetailResult::getTmNameType()const
{
	return tmNameType_;
}

std::string QueryTradeMarkApplicationDetailResult::getSendUserLogistics()const
{
	return sendUserLogistics_;
}

std::string QueryTradeMarkApplicationDetailResult::getGrayIconUrl()const
{
	return grayIconUrl_;
}

float QueryTradeMarkApplicationDetailResult::getServicePrice()const
{
	return servicePrice_;
}

QueryTradeMarkApplicationDetailResult::AdminUploads QueryTradeMarkApplicationDetailResult::getAdminUploads()const
{
	return adminUploads_;
}

std::string QueryTradeMarkApplicationDetailResult::getNotAcceptUrl()const
{
	return notAcceptUrl_;
}

std::vector<QueryTradeMarkApplicationDetailResult::ThirdClassifications> QueryTradeMarkApplicationDetailResult::getThirdClassification()const
{
	return thirdClassification_;
}

std::string QueryTradeMarkApplicationDetailResult::getExtendInfo()const
{
	return extendInfo_;
}

int QueryTradeMarkApplicationDetailResult::getStatus()const
{
	return status_;
}

long QueryTradeMarkApplicationDetailResult::getMaterialId()const
{
	return materialId_;
}

QueryTradeMarkApplicationDetailResult::RenewResponse QueryTradeMarkApplicationDetailResult::getRenewResponse()const
{
	return renewResponse_;
}

QueryTradeMarkApplicationDetailResult::MaterialDetail QueryTradeMarkApplicationDetailResult::getMaterialDetail()const
{
	return materialDetail_;
}

std::string QueryTradeMarkApplicationDetailResult::getTmNumber()const
{
	return tmNumber_;
}

long QueryTradeMarkApplicationDetailResult::getCreateTime()const
{
	return createTime_;
}

float QueryTradeMarkApplicationDetailResult::getOrderPrice()const
{
	return orderPrice_;
}

std::vector<std::string> QueryTradeMarkApplicationDetailResult::getFlags()const
{
	return flags_;
}

std::string QueryTradeMarkApplicationDetailResult::getOrderId()const
{
	return orderId_;
}

std::string QueryTradeMarkApplicationDetailResult::getPartnerName()const
{
	return partnerName_;
}

std::vector<QueryTradeMarkApplicationDetailResult::SupplementsItem> QueryTradeMarkApplicationDetailResult::getSupplements()const
{
	return supplements_;
}

QueryTradeMarkApplicationDetailResult::ReviewOfficialFiles QueryTradeMarkApplicationDetailResult::getReviewOfficialFiles()const
{
	return reviewOfficialFiles_;
}

int QueryTradeMarkApplicationDetailResult::getType()const
{
	return type_;
}

std::string QueryTradeMarkApplicationDetailResult::getRecvUserLogistics()const
{
	return recvUserLogistics_;
}

std::string QueryTradeMarkApplicationDetailResult::getNote()const
{
	return note_;
}

float QueryTradeMarkApplicationDetailResult::getTotalPrice()const
{
	return totalPrice_;
}

std::string QueryTradeMarkApplicationDetailResult::getTmName()const
{
	return tmName_;
}

long QueryTradeMarkApplicationDetailResult::getUpdateTime()const
{
	return updateTime_;
}

std::string QueryTradeMarkApplicationDetailResult::getBizId()const
{
	return bizId_;
}

std::string QueryTradeMarkApplicationDetailResult::getPartnerMobile()const
{
	return partnerMobile_;
}

