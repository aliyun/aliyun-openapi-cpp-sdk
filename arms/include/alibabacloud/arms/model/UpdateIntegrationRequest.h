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

#ifndef ALIBABACLOUD_ARMS_MODEL_UPDATEINTEGRATIONREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_UPDATEINTEGRATIONREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT UpdateIntegrationRequest : public RpcServiceRequest {
public:
	UpdateIntegrationRequest();
	~UpdateIntegrationRequest();
	std::string getShortToken() const;
	void setShortToken(const std::string &shortToken);
	std::string getInitiativeRecoverValue() const;
	void setInitiativeRecoverValue(const std::string &initiativeRecoverValue);
	std::string getLiveness() const;
	void setLiveness(const std::string &liveness);
	long getIntegrationId() const;
	void setIntegrationId(long integrationId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getApiEndpoint() const;
	void setApiEndpoint(const std::string &apiEndpoint);
	long getRecoverTime() const;
	void setRecoverTime(long recoverTime);
	std::string getDuplicateKey() const;
	void setDuplicateKey(const std::string &duplicateKey);
	std::string getIntegrationName() const;
	void setIntegrationName(const std::string &integrationName);
	bool getState() const;
	void setState(bool state);
	std::string getInitiativeRecoverField() const;
	void setInitiativeRecoverField(const std::string &initiativeRecoverField);
	std::string getFieldRedefineRules() const;
	void setFieldRedefineRules(const std::string &fieldRedefineRules);
	std::string getStat() const;
	void setStat(const std::string &stat);
	bool getAutoRecover() const;
	void setAutoRecover(bool autoRecover);
	std::string getExtendedFieldRedefineRules() const;
	void setExtendedFieldRedefineRules(const std::string &extendedFieldRedefineRules);
	std::string getIntegrationProductType() const;
	void setIntegrationProductType(const std::string &integrationProductType);

private:
	std::string shortToken_;
	std::string initiativeRecoverValue_;
	std::string liveness_;
	long integrationId_;
	std::string description_;
	std::string apiEndpoint_;
	long recoverTime_;
	std::string duplicateKey_;
	std::string integrationName_;
	bool state_;
	std::string initiativeRecoverField_;
	std::string fieldRedefineRules_;
	std::string stat_;
	bool autoRecover_;
	std::string extendedFieldRedefineRules_;
	std::string integrationProductType_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_UPDATEINTEGRATIONREQUEST_H_
