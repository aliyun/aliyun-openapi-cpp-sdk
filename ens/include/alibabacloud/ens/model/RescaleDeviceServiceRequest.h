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

#ifndef ALIBABACLOUD_ENS_MODEL_RESCALEDEVICESERVICEREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_RESCALEDEVICESERVICEREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT RescaleDeviceServiceRequest : public RpcServiceRequest {
public:
	RescaleDeviceServiceRequest();
	~RescaleDeviceServiceRequest();
	std::string getResourceSelector() const;
	void setResourceSelector(const std::string &resourceSelector);
	std::string getResourceInfo() const;
	void setResourceInfo(const std::string &resourceInfo);
	std::string getRescaleType() const;
	void setRescaleType(const std::string &rescaleType);
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	long getTimeout() const;
	void setTimeout(long timeout);
	std::string getRescaleLevel() const;
	void setRescaleLevel(const std::string &rescaleLevel);
	std::string getResourceSpec() const;
	void setResourceSpec(const std::string &resourceSpec);
	int getIpType() const;
	void setIpType(int ipType);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::string getServiceId() const;
	void setServiceId(const std::string &serviceId);

private:
	std::string resourceSelector_;
	std::string resourceInfo_;
	std::string rescaleType_;
	std::string imageId_;
	long timeout_;
	std::string rescaleLevel_;
	std::string resourceSpec_;
	int ipType_;
	std::string appId_;
	std::string serviceId_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_RESCALEDEVICESERVICEREQUEST_H_
