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

#ifndef ALIBABACLOUD_SAE_MODEL_CREATENAMESPACEREQUEST_H_
#define ALIBABACLOUD_SAE_MODEL_CREATENAMESPACEREQUEST_H_

#include <alibabacloud/sae/SaeExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sae {
namespace Model {
class ALIBABACLOUD_SAE_EXPORT CreateNamespaceRequest : public RoaServiceRequest {
public:
	CreateNamespaceRequest();
	~CreateNamespaceRequest();
	std::string getNamespaceName() const;
	void setNamespaceName(const std::string &namespaceName);
	std::string getNamespaceDescription() const;
	void setNamespaceDescription(const std::string &namespaceDescription);
	bool getEnableMicroRegistration() const;
	void setEnableMicroRegistration(bool enableMicroRegistration);
	std::string getNamespaceId() const;
	void setNamespaceId(const std::string &namespaceId);
	std::string getNameSpaceShortId() const;
	void setNameSpaceShortId(const std::string &nameSpaceShortId);

private:
	std::string namespaceName_;
	std::string namespaceDescription_;
	bool enableMicroRegistration_;
	std::string namespaceId_;
	std::string nameSpaceShortId_;
};
} // namespace Model
} // namespace Sae
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAE_MODEL_CREATENAMESPACEREQUEST_H_
