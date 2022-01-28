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

#ifndef ALIBABACLOUD_ENS_MODEL_ADDDEVICEINTERNETPORTREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_ADDDEVICEINTERNETPORTREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT AddDeviceInternetPortRequest : public RpcServiceRequest {
public:
	AddDeviceInternetPortRequest();
	~AddDeviceInternetPortRequest();
	std::string getISP() const;
	void setISP(const std::string &iSP);
	std::string getInternalIp() const;
	void setInternalIp(const std::string &internalIp);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNatType() const;
	void setNatType(const std::string &natType);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getInternalPort() const;
	void setInternalPort(const std::string &internalPort);

private:
	std::string iSP_;
	std::string internalIp_;
	std::string regionId_;
	std::string natType_;
	std::string instanceId_;
	std::string internalPort_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_ADDDEVICEINTERNETPORTREQUEST_H_
