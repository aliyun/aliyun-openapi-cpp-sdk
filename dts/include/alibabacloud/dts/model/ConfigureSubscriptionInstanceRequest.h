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

#ifndef ALIBABACLOUD_DTS_MODEL_CONFIGURESUBSCRIPTIONINSTANCEREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_CONFIGURESUBSCRIPTIONINSTANCEREQUEST_H_

#include <alibabacloud/dts/DtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dts {
namespace Model {
class ALIBABACLOUD_DTS_EXPORT ConfigureSubscriptionInstanceRequest : public RpcServiceRequest {
public:
	ConfigureSubscriptionInstanceRequest();
	~ConfigureSubscriptionInstanceRequest();
	std::string getSourceEndpointInstanceID() const;
	void setSourceEndpointInstanceID(const std::string &sourceEndpointInstanceID);
	std::string getSourceEndpointOwnerID() const;
	void setSourceEndpointOwnerID(const std::string &sourceEndpointOwnerID);
	bool getSubscriptionDataTypeDML() const;
	void setSubscriptionDataTypeDML(bool subscriptionDataTypeDML);
	std::string getSubscriptionInstanceId() const;
	void setSubscriptionInstanceId(const std::string &subscriptionInstanceId);
	std::string getSourceEndpointRole() const;
	void setSourceEndpointRole(const std::string &sourceEndpointRole);
	std::string getOwnerId() const;
	void setOwnerId(const std::string &ownerId);
	std::string getSourceEndpointInstanceType() const;
	void setSourceEndpointInstanceType(const std::string &sourceEndpointInstanceType);
	bool getSubscriptionDataTypeDDL() const;
	void setSubscriptionDataTypeDDL(bool subscriptionDataTypeDDL);
	std::string getSubscriptionObject() const;
	void setSubscriptionObject(const std::string &subscriptionObject);
	std::string getSubscriptionInstanceName() const;
	void setSubscriptionInstanceName(const std::string &subscriptionInstanceName);

private:
	std::string sourceEndpointInstanceID_;
	std::string sourceEndpointOwnerID_;
	bool subscriptionDataTypeDML_;
	std::string subscriptionInstanceId_;
	std::string sourceEndpointRole_;
	std::string ownerId_;
	std::string sourceEndpointInstanceType_;
	bool subscriptionDataTypeDDL_;
	std::string subscriptionObject_;
	std::string subscriptionInstanceName_;
};
} // namespace Model
} // namespace Dts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DTS_MODEL_CONFIGURESUBSCRIPTIONINSTANCEREQUEST_H_
