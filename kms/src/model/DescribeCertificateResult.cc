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

#include <alibabacloud/kms/model/DescribeCertificateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Kms;
using namespace AlibabaCloud::Kms::Model;

DescribeCertificateResult::DescribeCertificateResult() :
	ServiceResult()
{}

DescribeCertificateResult::DescribeCertificateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCertificateResult::~DescribeCertificateResult()
{}

void DescribeCertificateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSubjectAlternativeNames = value["SubjectAlternativeNames"]["SubjectAlternativeName"];
	for (const auto &item : allSubjectAlternativeNames)
		subjectAlternativeNames_.push_back(item.asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Serial"].isNull())
		serial_ = value["Serial"].asString();
	if(!value["CreatedAt"].isNull())
		createdAt_ = value["CreatedAt"].asString();
	if(!value["Tags"].isNull())
		tags_ = value["Tags"].asString();
	if(!value["SubjectKeyIdentifier"].isNull())
		subjectKeyIdentifier_ = value["SubjectKeyIdentifier"].asString();
	if(!value["ExportablePrivateKey"].isNull())
		exportablePrivateKey_ = value["ExportablePrivateKey"].asString() == "true";
	if(!value["Issuer"].isNull())
		issuer_ = value["Issuer"].asString();
	if(!value["SignatureAlgorithm"].isNull())
		signatureAlgorithm_ = value["SignatureAlgorithm"].asString();
	if(!value["NotAfter"].isNull())
		notAfter_ = value["NotAfter"].asString();
	if(!value["Arn"].isNull())
		arn_ = value["Arn"].asString();
	if(!value["CertificateId"].isNull())
		certificateId_ = value["CertificateId"].asString();
	if(!value["KeySpec"].isNull())
		keySpec_ = value["KeySpec"].asString();
	if(!value["ProtectionLevel"].isNull())
		protectionLevel_ = value["ProtectionLevel"].asString();
	if(!value["SubjectPublicKey"].isNull())
		subjectPublicKey_ = value["SubjectPublicKey"].asString();
	if(!value["Subject"].isNull())
		subject_ = value["Subject"].asString();
	if(!value["NotBefore"].isNull())
		notBefore_ = value["NotBefore"].asString();
	if(!value["UpdatedAt"].isNull())
		updatedAt_ = value["UpdatedAt"].asString();

}

std::string DescribeCertificateResult::getStatus()const
{
	return status_;
}

std::string DescribeCertificateResult::getProtectionLevel()const
{
	return protectionLevel_;
}

std::string DescribeCertificateResult::getIssuer()const
{
	return issuer_;
}

std::string DescribeCertificateResult::getCertificateId()const
{
	return certificateId_;
}

std::string DescribeCertificateResult::getCreatedAt()const
{
	return createdAt_;
}

std::string DescribeCertificateResult::getKeySpec()const
{
	return keySpec_;
}

std::vector<std::string> DescribeCertificateResult::getSubjectAlternativeNames()const
{
	return subjectAlternativeNames_;
}

std::string DescribeCertificateResult::getSignatureAlgorithm()const
{
	return signatureAlgorithm_;
}

std::string DescribeCertificateResult::getSubjectKeyIdentifier()const
{
	return subjectKeyIdentifier_;
}

std::string DescribeCertificateResult::getNotAfter()const
{
	return notAfter_;
}

std::string DescribeCertificateResult::getUpdatedAt()const
{
	return updatedAt_;
}

std::string DescribeCertificateResult::getSubject()const
{
	return subject_;
}

std::string DescribeCertificateResult::getSerial()const
{
	return serial_;
}

std::string DescribeCertificateResult::getSubjectPublicKey()const
{
	return subjectPublicKey_;
}

std::string DescribeCertificateResult::getArn()const
{
	return arn_;
}

std::string DescribeCertificateResult::getNotBefore()const
{
	return notBefore_;
}

std::string DescribeCertificateResult::getTags()const
{
	return tags_;
}

bool DescribeCertificateResult::getExportablePrivateKey()const
{
	return exportablePrivateKey_;
}

