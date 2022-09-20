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

#ifndef ALIBABACLOUD_MNS_OPEN_MODEL_DELETEQUEUEREQUEST_H_
#define ALIBABACLOUD_MNS_OPEN_MODEL_DELETEQUEUEREQUEST_H_

#include <alibabacloud/mns-open/Mns_openExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mns_open {
namespace Model {
class ALIBABACLOUD_MNS_OPEN_EXPORT DeleteQueueRequest : public RpcServiceRequest {
public:
	DeleteQueueRequest();
	~DeleteQueueRequest();
	std::string getQueueName() const;
	void setQueueName(const std::string &queueName);

private:
	std::string queueName_;
};
} // namespace Model
} // namespace Mns_open
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MNS_OPEN_MODEL_DELETEQUEUEREQUEST_H_
