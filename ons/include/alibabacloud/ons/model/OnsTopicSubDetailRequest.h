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

#ifndef ALIBABACLOUD_ONS_MODEL_ONSTOPICSUBDETAILREQUEST_H_
#define ALIBABACLOUD_ONS_MODEL_ONSTOPICSUBDETAILREQUEST_H_

#include <alibabacloud/ons/OnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ons {
namespace Model {
class ALIBABACLOUD_ONS_EXPORT OnsTopicSubDetailRequest : public RpcServiceRequest {
public:
	OnsTopicSubDetailRequest();
	~OnsTopicSubDetailRequest();
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getTopic() const;
	void setTopic(const std::string &topic);

private:
	std::string instanceId_;
	std::string topic_;
};
} // namespace Model
} // namespace Ons
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ONS_MODEL_ONSTOPICSUBDETAILREQUEST_H_
