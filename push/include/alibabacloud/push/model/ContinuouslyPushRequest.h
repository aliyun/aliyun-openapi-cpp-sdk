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

#ifndef ALIBABACLOUD_PUSH_MODEL_CONTINUOUSLYPUSHREQUEST_H_
#define ALIBABACLOUD_PUSH_MODEL_CONTINUOUSLYPUSHREQUEST_H_

#include <alibabacloud/push/PushExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Push {
namespace Model {
class ALIBABACLOUD_PUSH_EXPORT ContinuouslyPushRequest : public RpcServiceRequest {
public:
	ContinuouslyPushRequest();
	~ContinuouslyPushRequest();
	std::string getMessageId() const;
	void setMessageId(const std::string &messageId);
	std::string getTarget() const;
	void setTarget(const std::string &target);
	long getAppKey() const;
	void setAppKey(long appKey);
	std::string getTargetValue() const;
	void setTargetValue(const std::string &targetValue);

private:
	std::string messageId_;
	std::string target_;
	long appKey_;
	std::string targetValue_;
};
} // namespace Model
} // namespace Push
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_PUSH_MODEL_CONTINUOUSLYPUSHREQUEST_H_
