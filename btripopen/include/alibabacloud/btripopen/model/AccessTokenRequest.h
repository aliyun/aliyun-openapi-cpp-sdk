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

#ifndef ALIBABACLOUD_BTRIPOPEN_MODEL_ACCESSTOKENREQUEST_H_
#define ALIBABACLOUD_BTRIPOPEN_MODEL_ACCESSTOKENREQUEST_H_

#include <alibabacloud/btripopen/BtripOpenExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace BtripOpen {
namespace Model {
class ALIBABACLOUD_BTRIPOPEN_EXPORT AccessTokenRequest : public RoaServiceRequest {
public:
	AccessTokenRequest();
	~AccessTokenRequest();
	std::string getApp_key() const;
	void setApp_key(const std::string &app_key);
	std::string getApp_secret() const;
	void setApp_secret(const std::string &app_secret);

private:
	std::string app_key_;
	std::string app_secret_;
};
} // namespace Model
} // namespace BtripOpen
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_BTRIPOPEN_MODEL_ACCESSTOKENREQUEST_H_
