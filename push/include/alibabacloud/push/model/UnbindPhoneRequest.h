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

#ifndef ALIBABACLOUD_PUSH_MODEL_UNBINDPHONEREQUEST_H_
#define ALIBABACLOUD_PUSH_MODEL_UNBINDPHONEREQUEST_H_

#include <alibabacloud/push/PushExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Push {
namespace Model {
class ALIBABACLOUD_PUSH_EXPORT UnbindPhoneRequest : public RpcServiceRequest {
public:
	UnbindPhoneRequest();
	~UnbindPhoneRequest();
	std::string getDeviceId() const;
	void setDeviceId(const std::string &deviceId);
	long getAppKey() const;
	void setAppKey(long appKey);

private:
	std::string deviceId_;
	long appKey_;
};
} // namespace Model
} // namespace Push
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_PUSH_MODEL_UNBINDPHONEREQUEST_H_
