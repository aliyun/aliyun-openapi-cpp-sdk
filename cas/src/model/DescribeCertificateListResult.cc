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

#include <alibabacloud/cas/model/DescribeCertificateListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

DescribeCertificateListResult::DescribeCertificateListResult() :
	ServiceResult()
{}

DescribeCertificateListResult::DescribeCertificateListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCertificateListResult::~DescribeCertificateListResult()
{}

void DescribeCertificateListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCertificateListNode = value["CertificateList"]["Certificate"];
	for (auto valueCertificateListCertificate : allCertificateListNode)
	{
		Certificate certificateListObject;
		if(!valueCertificateListCertificate["Id"].isNull())
			certificateListObject.id = std::stol(valueCertificateListCertificate["Id"].asString());
		if(!valueCertificateListCertificate["Name"].isNull())
			certificateListObject.name = valueCertificateListCertificate["Name"].asString();
		if(!valueCertificateListCertificate["SourceType"].isNull())
			certificateListObject.sourceType = valueCertificateListCertificate["SourceType"].asString();
		if(!valueCertificateListCertificate["CertType"].isNull())
			certificateListObject.certType = valueCertificateListCertificate["CertType"].asString();
		if(!valueCertificateListCertificate["InstanceId"].isNull())
			certificateListObject.instanceId = valueCertificateListCertificate["InstanceId"].asString();
		if(!valueCertificateListCertificate["OrderId"].isNull())
			certificateListObject.orderId = std::stol(valueCertificateListCertificate["OrderId"].asString());
		if(!valueCertificateListCertificate["OrderType"].isNull())
			certificateListObject.orderType = valueCertificateListCertificate["OrderType"].asString();
		if(!valueCertificateListCertificate["BrandName"].isNull())
			certificateListObject.brandName = valueCertificateListCertificate["BrandName"].asString();
		if(!valueCertificateListCertificate["BeforeDate"].isNull())
			certificateListObject.beforeDate = std::stol(valueCertificateListCertificate["BeforeDate"].asString());
		if(!valueCertificateListCertificate["AfterDate"].isNull())
			certificateListObject.afterDate = std::stol(valueCertificateListCertificate["AfterDate"].asString());
		if(!valueCertificateListCertificate["Year"].isNull())
			certificateListObject.year = std::stoi(valueCertificateListCertificate["Year"].asString());
		if(!valueCertificateListCertificate["Domain"].isNull())
			certificateListObject.domain = valueCertificateListCertificate["Domain"].asString();
		if(!valueCertificateListCertificate["RemainingDays"].isNull())
			certificateListObject.remainingDays = std::stoi(valueCertificateListCertificate["RemainingDays"].asString());
		if(!valueCertificateListCertificate["DeploymentCloudProduct"].isNull())
			certificateListObject.deploymentCloudProduct = valueCertificateListCertificate["DeploymentCloudProduct"].asString();
		if(!valueCertificateListCertificate["StatusCode"].isNull())
			certificateListObject.statusCode = valueCertificateListCertificate["StatusCode"].asString();
		if(!valueCertificateListCertificate["NewBuyCertType"].isNull())
			certificateListObject.newBuyCertType = valueCertificateListCertificate["NewBuyCertType"].asString();
		if(!valueCertificateListCertificate["NewBuyDomainType"].isNull())
			certificateListObject.newBuyDomainType = valueCertificateListCertificate["NewBuyDomainType"].asString();
		if(!valueCertificateListCertificate["NewBuyBrand"].isNull())
			certificateListObject.newBuyBrand = valueCertificateListCertificate["NewBuyBrand"].asString();
		if(!valueCertificateListCertificate["NewBuyDomainCount"].isNull())
			certificateListObject.newBuyDomainCount = std::stoi(valueCertificateListCertificate["NewBuyDomainCount"].asString());
		if(!valueCertificateListCertificate["ShowDeployment"].isNull())
			certificateListObject.showDeployment = std::stoi(valueCertificateListCertificate["ShowDeployment"].asString());
		if(!valueCertificateListCertificate["ShowRefund"].isNull())
			certificateListObject.showRefund = valueCertificateListCertificate["ShowRefund"].asString() == "true";
		if(!valueCertificateListCertificate["AccessDownload"].isNull())
			certificateListObject.accessDownload = std::stoi(valueCertificateListCertificate["AccessDownload"].asString());
		if(!valueCertificateListCertificate["PartnerOrderId"].isNull())
			certificateListObject.partnerOrderId = valueCertificateListCertificate["PartnerOrderId"].asString();
		if(!valueCertificateListCertificate["IsFree"].isNull())
			certificateListObject.isFree = valueCertificateListCertificate["IsFree"].asString() == "true";
		certificateList_.push_back(certificateListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["ShowSize"].isNull())
		showSize_ = std::stoi(value["ShowSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());

}

int DescribeCertificateListResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeCertificateListResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeCertificateListResult::Certificate> DescribeCertificateListResult::getCertificateList()const
{
	return certificateList_;
}

int DescribeCertificateListResult::getShowSize()const
{
	return showSize_;
}

