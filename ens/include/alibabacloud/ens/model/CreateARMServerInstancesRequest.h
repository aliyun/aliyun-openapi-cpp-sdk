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

#ifndef ALIBABACLOUD_ENS_MODEL_CREATEARMSERVERINSTANCESREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_CREATEARMSERVERINSTANCESREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT CreateARMServerInstancesRequest : public RpcServiceRequest {
public:
	CreateARMServerInstancesRequest();
	~CreateARMServerInstancesRequest();
	std::string getKeyPairName() const;
	void setKeyPairName(const std::string &keyPairName);
	std::string getResolution() const;
	void setResolution(const std::string &resolution);
	int getFrequency() const;
	void setFrequency(int frequency);
	std::string getEnsRegionId() const;
	void setEnsRegionId(const std::string &ensRegionId);
	int getPeriod() const;
	void setPeriod(int period);
	std::string getPeriodUnit() const;
	void setPeriodUnit(const std::string &periodUnit);
	bool getAutoRenew() const;
	void setAutoRenew(bool autoRenew);
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	std::string getServerType() const;
	void setServerType(const std::string &serverType);
	bool getAutoUseCoupon() const;
	void setAutoUseCoupon(bool autoUseCoupon);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	int getAmount() const;
	void setAmount(int amount);
	std::string getEnvironmentVar() const;
	void setEnvironmentVar(const std::string &environmentVar);
	std::string get_NameSpace() const;
	void set_NameSpace(const std::string &_nameSpace);
	std::string getServerName() const;
	void setServerName(const std::string &serverName);
	std::string getPayType() const;
	void setPayType(const std::string &payType);

private:
	std::string keyPairName_;
	std::string resolution_;
	int frequency_;
	std::string ensRegionId_;
	int period_;
	std::string periodUnit_;
	bool autoRenew_;
	std::string imageId_;
	std::string serverType_;
	bool autoUseCoupon_;
	std::string instanceType_;
	int amount_;
	std::string environmentVar_;
	std::string _nameSpace_;
	std::string serverName_;
	std::string payType_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_CREATEARMSERVERINSTANCESREQUEST_H_
