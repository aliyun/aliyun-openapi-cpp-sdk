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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allThirdClassification = value["ThirdClassification"]["ThirdClassifications"];
	for (auto value : allThirdClassification)
	{
		ThirdClassifications thirdClassificationObject;
		if(!value["Code"].isNull())
			thirdClassificationObject.code = value["Code"].asString();
		if(!value["Name"].isNull())
			thirdClassificationObject.name = value["Name"].asString();
		thirdClassification_.push_back(thirdClassificationObject);
	}
	auto allSupplements = value["Supplements"]["SupplementsItem"];
	for (auto value : allSupplements)
	{
		SupplementsItem supplementsObject;
		if(!value["Id"].isNull())
			supplementsObject.id = std::stol(value["Id"].asString());
		if(!value["SerialNumber"].isNull())
			supplementsObject.serialNumber = value["SerialNumber"].asString();
		if(!value["Type"].isNull())
			supplementsObject.type = std::stoi(value["Type"].asString());
		if(!value["Status"].isNull())
			supplementsObject.status = std::stoi(value["Status"].asString());
		if(!value["OrderId"].isNull())
			supplementsObject.orderId = value["OrderId"].asString();
		if(!value["TmNumber"].isNull())
			supplementsObject.tmNumber = value["TmNumber"].asString();
		if(!value["SendTime"].isNull())
			supplementsObject.sendTime = std::stol(value["SendTime"].asString());
		if(!value["AcceptTime"].isNull())
			supplementsObject.acceptTime = std::stol(value["AcceptTime"].asString());
		if(!value["SbjDeadTime"].isNull())
			supplementsObject.sbjDeadTime = std::stol(value["SbjDeadTime"].asString());
		if(!value["AcceptDeadTime"].isNull())
			supplementsObject.acceptDeadTime = std::stol(value["AcceptDeadTime"].asString());
		if(!value["UploadFileTemplateUrl"].isNull())
			supplementsObject.uploadFileTemplateUrl = value["UploadFileTemplateUrl"].asString();
		if(!value["Content"].isNull())
			supplementsObject.content = value["Content"].asString();
		if(!value["BatchNum"].isNull())
			supplementsObject.batchNum = value["BatchNum"].asString();
		if(!value["OperateTime"].isNull())
			supplementsObject.operateTime = std::stol(value["OperateTime"].asString());
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
	auto allReceiptUrl = value["ReceiptUrl"]["ReceiptUrl"];
	for (const auto &item : allReceiptUrl)
		receiptUrl_.push_back(item.asString());
	auto allJudgeResultUrl = value["JudgeResultUrl"]["JudgeResultUrl"];
	for (const auto &item : allJudgeResultUrl)
		judgeResultUrl_.push_back(item.asString());
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

std::string QueryTradeMarkApplicationDetailResult::getOrderId()const
{
	return orderId_;
}

std::vector<QueryTradeMarkApplicationDetailResult::SupplementsItem> QueryTradeMarkApplicationDetailResult::getSupplements()const
{
	return supplements_;
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

