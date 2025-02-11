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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_VEHICLEMETAVERIFYV2REQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_VEHICLEMETAVERIFYV2REQUEST_H_

#include <alibabacloud/cloudauth/CloudauthExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cloudauth {
namespace Model {
class ALIBABACLOUD_CLOUDAUTH_EXPORT VehicleMetaVerifyV2Request : public RpcServiceRequest {
public:
	VehicleMetaVerifyV2Request();
	~VehicleMetaVerifyV2Request();
	std::string getVehicleType() const;
	void setVehicleType(const std::string &vehicleType);
	std::string getParamType() const;
	void setParamType(const std::string &paramType);
	std::string getVehicleNum() const;
	void setVehicleNum(const std::string &vehicleNum);
	std::string getIdentifyNum() const;
	void setIdentifyNum(const std::string &identifyNum);
	std::string getVerifyMetaType() const;
	void setVerifyMetaType(const std::string &verifyMetaType);
	std::string getUserName() const;
	void setUserName(const std::string &userName);

private:
	std::string vehicleType_;
	std::string paramType_;
	std::string vehicleNum_;
	std::string identifyNum_;
	std::string verifyMetaType_;
	std::string userName_;
};
} // namespace Model
} // namespace Cloudauth
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_VEHICLEMETAVERIFYV2REQUEST_H_
