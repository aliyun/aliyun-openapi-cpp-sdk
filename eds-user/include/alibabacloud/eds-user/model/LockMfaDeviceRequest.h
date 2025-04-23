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

#ifndef ALIBABACLOUD_EDS_USER_MODEL_LOCKMFADEVICEREQUEST_H_
#define ALIBABACLOUD_EDS_USER_MODEL_LOCKMFADEVICEREQUEST_H_

#include <alibabacloud/eds-user/Eds_userExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eds_user {
namespace Model {
class ALIBABACLOUD_EDS_USER_EXPORT LockMfaDeviceRequest : public RpcServiceRequest {
public:
	LockMfaDeviceRequest();
	~LockMfaDeviceRequest();
	std::string getSerialNumber() const;
	void setSerialNumber(const std::string &serialNumber);
	std::string getAdDomain() const;
	void setAdDomain(const std::string &adDomain);

private:
	std::string serialNumber_;
	std::string adDomain_;
};
} // namespace Model
} // namespace Eds_user
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EDS_USER_MODEL_LOCKMFADEVICEREQUEST_H_
