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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_SAVESINGLETASKFORSAVEARTEXTENSIONREQUEST_H_
#define ALIBABACLOUD_DOMAIN_MODEL_SAVESINGLETASKFORSAVEARTEXTENSIONREQUEST_H_

#include <alibabacloud/domain/DomainExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Domain {
namespace Model {
class ALIBABACLOUD_DOMAIN_EXPORT SaveSingleTaskForSaveArtExtensionRequest : public RpcServiceRequest {
public:
	SaveSingleTaskForSaveArtExtensionRequest();
	~SaveSingleTaskForSaveArtExtensionRequest();
	std::string getSubject() const;
	void setSubject(const std::string &subject);
	std::string getTitle() const;
	void setTitle(const std::string &title);
	std::string getDateOrPeriod() const;
	void setDateOrPeriod(const std::string &dateOrPeriod);
	std::string getReference() const;
	void setReference(const std::string &reference);
	std::string getFeatures() const;
	void setFeatures(const std::string &features);
	std::string getInscriptionsAndMarkings() const;
	void setInscriptionsAndMarkings(const std::string &inscriptionsAndMarkings);
	std::string getObjectType() const;
	void setObjectType(const std::string &objectType);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	std::string getMaker() const;
	void setMaker(const std::string &maker);
	std::string getMaterialsAndTechniques() const;
	void setMaterialsAndTechniques(const std::string &materialsAndTechniques);
	std::string getDimensions() const;
	void setDimensions(const std::string &dimensions);

private:
	std::string subject_;
	std::string title_;
	std::string dateOrPeriod_;
	std::string reference_;
	std::string features_;
	std::string inscriptionsAndMarkings_;
	std::string objectType_;
	std::string lang_;
	std::string domainName_;
	std::string maker_;
	std::string materialsAndTechniques_;
	std::string dimensions_;
};
} // namespace Model
} // namespace Domain
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DOMAIN_MODEL_SAVESINGLETASKFORSAVEARTEXTENSIONREQUEST_H_
