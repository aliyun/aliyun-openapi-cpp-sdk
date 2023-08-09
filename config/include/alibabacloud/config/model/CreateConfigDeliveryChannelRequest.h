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

#ifndef ALIBABACLOUD_CONFIG_MODEL_CREATECONFIGDELIVERYCHANNELREQUEST_H_
#define ALIBABACLOUD_CONFIG_MODEL_CREATECONFIGDELIVERYCHANNELREQUEST_H_

#include <alibabacloud/config/ConfigExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Config {
namespace Model {
class ALIBABACLOUD_CONFIG_EXPORT CreateConfigDeliveryChannelRequest : public RpcServiceRequest {
public:
	CreateConfigDeliveryChannelRequest();
	~CreateConfigDeliveryChannelRequest();
	bool getNonCompliantNotification() const;
	void setNonCompliantNotification(bool nonCompliantNotification);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	bool getConfigurationSnapshot() const;
	void setConfigurationSnapshot(bool configurationSnapshot);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getDeliveryChannelTargetArn() const;
	void setDeliveryChannelTargetArn(const std::string &deliveryChannelTargetArn);
	std::string getDeliveryChannelCondition() const;
	void setDeliveryChannelCondition(const std::string &deliveryChannelCondition);
	bool getConfigurationItemChangeNotification() const;
	void setConfigurationItemChangeNotification(bool configurationItemChangeNotification);
	std::string getDeliveryChannelName() const;
	void setDeliveryChannelName(const std::string &deliveryChannelName);
	std::string getDeliverySnapshotTime() const;
	void setDeliverySnapshotTime(const std::string &deliverySnapshotTime);
	std::string getOversizedDataOSSTargetArn() const;
	void setOversizedDataOSSTargetArn(const std::string &oversizedDataOSSTargetArn);
	std::string getDeliveryChannelType() const;
	void setDeliveryChannelType(const std::string &deliveryChannelType);

private:
	bool nonCompliantNotification_;
	std::string clientToken_;
	bool configurationSnapshot_;
	std::string description_;
	std::string deliveryChannelTargetArn_;
	std::string deliveryChannelCondition_;
	bool configurationItemChangeNotification_;
	std::string deliveryChannelName_;
	std::string deliverySnapshotTime_;
	std::string oversizedDataOSSTargetArn_;
	std::string deliveryChannelType_;
};
} // namespace Model
} // namespace Config
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CONFIG_MODEL_CREATECONFIGDELIVERYCHANNELREQUEST_H_
