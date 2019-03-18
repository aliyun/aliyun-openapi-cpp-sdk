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

#include <alibabacloud/cas/model/CreateFilingSignatureDocumentRequest.h>

using AlibabaCloud::Cas::Model::CreateFilingSignatureDocumentRequest;

CreateFilingSignatureDocumentRequest::CreateFilingSignatureDocumentRequest() :
	RpcServiceRequest("cas", "2018-08-13", "CreateFilingSignatureDocument")
{}

CreateFilingSignatureDocumentRequest::~CreateFilingSignatureDocumentRequest()
{}

std::string CreateFilingSignatureDocumentRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateFilingSignatureDocumentRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string CreateFilingSignatureDocumentRequest::getDocId()const
{
	return docId_;
}

void CreateFilingSignatureDocumentRequest::setDocId(const std::string& docId)
{
	docId_ = docId;
	setParameter("DocId", docId);
}

std::string CreateFilingSignatureDocumentRequest::getLang()const
{
	return lang_;
}

void CreateFilingSignatureDocumentRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

