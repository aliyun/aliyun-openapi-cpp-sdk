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

#include <alibabacloud/cas/model/ListUserCertificateOrderResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

ListUserCertificateOrderResult::ListUserCertificateOrderResult() :
	ServiceResult()
{}

ListUserCertificateOrderResult::ListUserCertificateOrderResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUserCertificateOrderResult::~ListUserCertificateOrderResult()
{}

void ListUserCertificateOrderResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCertificateOrderListNode = value["CertificateOrderList"]["CertificateOrderListItem"];
	for (auto valueCertificateOrderListCertificateOrderListItem : allCertificateOrderListNode)
	{
		CertificateOrderListItem certificateOrderListObject;
		if(!valueCertificateOrderListCertificateOrderListItem["Algorithm"].isNull())
			certificateOrderListObject.algorithm = valueCertificateOrderListCertificateOrderListItem["Algorithm"].asString();
		if(!valueCertificateOrderListCertificateOrderListItem["AliyunOrderId"].isNull())
			certificateOrderListObject.aliyunOrderId = std::stol(valueCertificateOrderListCertificateOrderListItem["AliyunOrderId"].asString());
		if(!valueCertificateOrderListCertificateOrderListItem["BuyDate"].isNull())
			certificateOrderListObject.buyDate = std::stol(valueCertificateOrderListCertificateOrderListItem["BuyDate"].asString());
		if(!valueCertificateOrderListCertificateOrderListItem["CertEndTime"].isNull())
			certificateOrderListObject.certEndTime = std::stol(valueCertificateOrderListCertificateOrderListItem["CertEndTime"].asString());
		if(!valueCertificateOrderListCertificateOrderListItem["CertStartTime"].isNull())
			certificateOrderListObject.certStartTime = std::stol(valueCertificateOrderListCertificateOrderListItem["CertStartTime"].asString());
		if(!valueCertificateOrderListCertificateOrderListItem["CertType"].isNull())
			certificateOrderListObject.certType = valueCertificateOrderListCertificateOrderListItem["CertType"].asString();
		if(!valueCertificateOrderListCertificateOrderListItem["Domain"].isNull())
			certificateOrderListObject.domain = valueCertificateOrderListCertificateOrderListItem["Domain"].asString();
		if(!valueCertificateOrderListCertificateOrderListItem["DomainCount"].isNull())
			certificateOrderListObject.domainCount = std::stol(valueCertificateOrderListCertificateOrderListItem["DomainCount"].asString());
		if(!valueCertificateOrderListCertificateOrderListItem["DomainType"].isNull())
			certificateOrderListObject.domainType = valueCertificateOrderListCertificateOrderListItem["DomainType"].asString();
		if(!valueCertificateOrderListCertificateOrderListItem["InstanceId"].isNull())
			certificateOrderListObject.instanceId = valueCertificateOrderListCertificateOrderListItem["InstanceId"].asString();
		if(!valueCertificateOrderListCertificateOrderListItem["OrderId"].isNull())
			certificateOrderListObject.orderId = std::stol(valueCertificateOrderListCertificateOrderListItem["OrderId"].asString());
		if(!valueCertificateOrderListCertificateOrderListItem["PartnerOrderId"].isNull())
			certificateOrderListObject.partnerOrderId = valueCertificateOrderListCertificateOrderListItem["PartnerOrderId"].asString();
		if(!valueCertificateOrderListCertificateOrderListItem["ProductCode"].isNull())
			certificateOrderListObject.productCode = valueCertificateOrderListCertificateOrderListItem["ProductCode"].asString();
		if(!valueCertificateOrderListCertificateOrderListItem["ProductName"].isNull())
			certificateOrderListObject.productName = valueCertificateOrderListCertificateOrderListItem["ProductName"].asString();
		if(!valueCertificateOrderListCertificateOrderListItem["RootBrand"].isNull())
			certificateOrderListObject.rootBrand = valueCertificateOrderListCertificateOrderListItem["RootBrand"].asString();
		if(!valueCertificateOrderListCertificateOrderListItem["SourceType"].isNull())
			certificateOrderListObject.sourceType = valueCertificateOrderListCertificateOrderListItem["SourceType"].asString();
		if(!valueCertificateOrderListCertificateOrderListItem["Status"].isNull())
			certificateOrderListObject.status = valueCertificateOrderListCertificateOrderListItem["Status"].asString();
		if(!valueCertificateOrderListCertificateOrderListItem["TrusteeStatus"].isNull())
			certificateOrderListObject.trusteeStatus = valueCertificateOrderListCertificateOrderListItem["TrusteeStatus"].asString();
		if(!valueCertificateOrderListCertificateOrderListItem["WildDomainCount"].isNull())
			certificateOrderListObject.wildDomainCount = std::stol(valueCertificateOrderListCertificateOrderListItem["WildDomainCount"].asString());
		if(!valueCertificateOrderListCertificateOrderListItem["CertificateId"].isNull())
			certificateOrderListObject.certificateId = std::stol(valueCertificateOrderListCertificateOrderListItem["CertificateId"].asString());
		if(!valueCertificateOrderListCertificateOrderListItem["Name"].isNull())
			certificateOrderListObject.name = valueCertificateOrderListCertificateOrderListItem["Name"].asString();
		if(!valueCertificateOrderListCertificateOrderListItem["CommonName"].isNull())
			certificateOrderListObject.commonName = valueCertificateOrderListCertificateOrderListItem["CommonName"].asString();
		if(!valueCertificateOrderListCertificateOrderListItem["Fingerprint"].isNull())
			certificateOrderListObject.fingerprint = valueCertificateOrderListCertificateOrderListItem["Fingerprint"].asString();
		if(!valueCertificateOrderListCertificateOrderListItem["Sha2"].isNull())
			certificateOrderListObject.sha2 = valueCertificateOrderListCertificateOrderListItem["Sha2"].asString();
		if(!valueCertificateOrderListCertificateOrderListItem["SerialNo"].isNull())
			certificateOrderListObject.serialNo = valueCertificateOrderListCertificateOrderListItem["SerialNo"].asString();
		if(!valueCertificateOrderListCertificateOrderListItem["Issuer"].isNull())
			certificateOrderListObject.issuer = valueCertificateOrderListCertificateOrderListItem["Issuer"].asString();
		if(!valueCertificateOrderListCertificateOrderListItem["OrgName"].isNull())
			certificateOrderListObject.orgName = valueCertificateOrderListCertificateOrderListItem["OrgName"].asString();
		if(!valueCertificateOrderListCertificateOrderListItem["Province"].isNull())
			certificateOrderListObject.province = valueCertificateOrderListCertificateOrderListItem["Province"].asString();
		if(!valueCertificateOrderListCertificateOrderListItem["City"].isNull())
			certificateOrderListObject.city = valueCertificateOrderListCertificateOrderListItem["City"].asString();
		if(!valueCertificateOrderListCertificateOrderListItem["Country"].isNull())
			certificateOrderListObject.country = valueCertificateOrderListCertificateOrderListItem["Country"].asString();
		if(!valueCertificateOrderListCertificateOrderListItem["Sans"].isNull())
			certificateOrderListObject.sans = valueCertificateOrderListCertificateOrderListItem["Sans"].asString();
		if(!valueCertificateOrderListCertificateOrderListItem["Expired"].isNull())
			certificateOrderListObject.expired = valueCertificateOrderListCertificateOrderListItem["Expired"].asString() == "true";
		if(!valueCertificateOrderListCertificateOrderListItem["Upload"].isNull())
			certificateOrderListObject.upload = valueCertificateOrderListCertificateOrderListItem["Upload"].asString() == "true";
		if(!valueCertificateOrderListCertificateOrderListItem["StartDate"].isNull())
			certificateOrderListObject.startDate = valueCertificateOrderListCertificateOrderListItem["StartDate"].asString();
		if(!valueCertificateOrderListCertificateOrderListItem["EndDate"].isNull())
			certificateOrderListObject.endDate = valueCertificateOrderListCertificateOrderListItem["EndDate"].asString();
		if(!valueCertificateOrderListCertificateOrderListItem["ResourceGroupId"].isNull())
			certificateOrderListObject.resourceGroupId = valueCertificateOrderListCertificateOrderListItem["ResourceGroupId"].asString();
		certificateOrderList_.push_back(certificateOrderListObject);
	}
	if(!value["ShowSize"].isNull())
		showSize_ = std::stol(value["ShowSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stol(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListUserCertificateOrderResult::getTotalCount()const
{
	return totalCount_;
}

long ListUserCertificateOrderResult::getCurrentPage()const
{
	return currentPage_;
}

long ListUserCertificateOrderResult::getShowSize()const
{
	return showSize_;
}

std::vector<ListUserCertificateOrderResult::CertificateOrderListItem> ListUserCertificateOrderResult::getCertificateOrderList()const
{
	return certificateOrderList_;
}

