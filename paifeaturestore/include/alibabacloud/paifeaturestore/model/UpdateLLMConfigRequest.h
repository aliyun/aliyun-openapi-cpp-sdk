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

#ifndef ALIBABACLOUD_PAIFEATURESTORE_MODEL_UPDATELLMCONFIGREQUEST_H_
#define ALIBABACLOUD_PAIFEATURESTORE_MODEL_UPDATELLMCONFIGREQUEST_H_

#include <alibabacloud/paifeaturestore/PaiFeatureStoreExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace PaiFeatureStore {
namespace Model {
class ALIBABACLOUD_PAIFEATURESTORE_EXPORT UpdateLLMConfigRequest : public RoaServiceRequest {
public:
	UpdateLLMConfigRequest();
	~UpdateLLMConfigRequest();
	std::string getBody() const;
	void setBody(const std::string &body);
	std::string getLLMConfigId() const;
	void setLLMConfigId(const std::string &lLMConfigId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);

private:
	std::string body_;
	std::string lLMConfigId_;
	std::string instanceId_;
};
} // namespace Model
} // namespace PaiFeatureStore
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_PAIFEATURESTORE_MODEL_UPDATELLMCONFIGREQUEST_H_
