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

#ifndef ALIBABACLOUD_ENS_MODEL_PRECREATEENSSERVICEREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_PRECREATEENSSERVICEREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT PreCreateEnsServiceRequest : public RpcServiceRequest {
public:
	PreCreateEnsServiceRequest();
	~PreCreateEnsServiceRequest();
	std::string getBandwidthType() const;
	void setBandwidthType(const std::string &bandwidthType);
	std::string getKeyPairName() const;
	void setKeyPairName(const std::string &keyPairName);
	std::string getPassword() const;
	void setPassword(const std::string &password);
	std::string getBuyResourcesDetail() const;
	void setBuyResourcesDetail(const std::string &buyResourcesDetail);
	std::string getSystemDiskSize() const;
	void setSystemDiskSize(const std::string &systemDiskSize);
	std::string getInstanceBandwithdLimit() const;
	void setInstanceBandwithdLimit(const std::string &instanceBandwithdLimit);
	std::string getEnsServiceName() const;
	void setEnsServiceName(const std::string &ensServiceName);
	std::string getNetLevel() const;
	void setNetLevel(const std::string &netLevel);
	std::string getDataDiskSize() const;
	void setDataDiskSize(const std::string &dataDiskSize);
	std::string getSchedulingPriceStrategy() const;
	void setSchedulingPriceStrategy(const std::string &schedulingPriceStrategy);
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	std::string getInstanceSpec() const;
	void setInstanceSpec(const std::string &instanceSpec);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	std::string getSchedulingStrategy() const;
	void setSchedulingStrategy(const std::string &schedulingStrategy);

private:
	std::string bandwidthType_;
	std::string keyPairName_;
	std::string password_;
	std::string buyResourcesDetail_;
	std::string systemDiskSize_;
	std::string instanceBandwithdLimit_;
	std::string ensServiceName_;
	std::string netLevel_;
	std::string dataDiskSize_;
	std::string schedulingPriceStrategy_;
	std::string imageId_;
	std::string instanceSpec_;
	std::string userData_;
	std::string schedulingStrategy_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_PRECREATEENSSERVICEREQUEST_H_
