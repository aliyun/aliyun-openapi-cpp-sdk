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

#include <alibabacloud/cas/model/ListCertResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

ListCertResult::ListCertResult() :
	ServiceResult()
{}

ListCertResult::ListCertResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCertResult::~ListCertResult()
{}

void ListCertResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCertListNode = value["CertList"]["Cert"];
	for (auto valueCertListCert : allCertListNode)
	{
		Cert certListObject;
		if(!valueCertListCert["WhId"].isNull())
			certListObject.whId = std::stol(valueCertListCert["WhId"].asString());
		if(!valueCertListCert["Identifier"].isNull())
			certListObject.identifier = valueCertListCert["Identifier"].asString();
		if(!valueCertListCert["WhInstanceId"].isNull())
			certListObject.whInstanceId = valueCertListCert["WhInstanceId"].asString();
		if(!valueCertListCert["Status"].isNull())
			certListObject.status = valueCertListCert["Status"].asString();
		if(!valueCertListCert["SourceType"].isNull())
			certListObject.sourceType = valueCertListCert["SourceType"].asString();
		if(!valueCertListCert["CertType"].isNull())
			certListObject.certType = valueCertListCert["CertType"].asString();
		if(!valueCertListCert["CommonName"].isNull())
			certListObject.commonName = valueCertListCert["CommonName"].asString();
		if(!valueCertListCert["BeforeDate"].isNull())
			certListObject.beforeDate = std::stol(valueCertListCert["BeforeDate"].asString());
		if(!valueCertListCert["Issuer"].isNull())
			certListObject.issuer = valueCertListCert["Issuer"].asString();
		if(!valueCertListCert["AfterDate"].isNull())
			certListObject.afterDate = std::stol(valueCertListCert["AfterDate"].asString());
		if(!valueCertListCert["ExistPrivateKey"].isNull())
			certListObject.existPrivateKey = valueCertListCert["ExistPrivateKey"].asString() == "true";
		if(!valueCertListCert["Sans"].isNull())
			certListObject.sans = valueCertListCert["Sans"].asString();
		certList_.push_back(certListObject);
	}
	if(!value["ShowSize"].isNull())
		showSize_ = std::stol(value["ShowSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stol(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

std::vector<ListCertResult::Cert> ListCertResult::getCertList()const
{
	return certList_;
}

long ListCertResult::getTotalCount()const
{
	return totalCount_;
}

long ListCertResult::getCurrentPage()const
{
	return currentPage_;
}

long ListCertResult::getShowSize()const
{
	return showSize_;
}

