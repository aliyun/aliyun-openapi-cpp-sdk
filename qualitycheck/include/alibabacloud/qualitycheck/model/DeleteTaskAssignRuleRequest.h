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

#ifndef ALIBABACLOUD_QUALITYCHECK_MODEL_DELETETASKASSIGNRULEREQUEST_H_
#define ALIBABACLOUD_QUALITYCHECK_MODEL_DELETETASKASSIGNRULEREQUEST_H_

#include <alibabacloud/qualitycheck/QualitycheckExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Qualitycheck {
namespace Model {
class ALIBABACLOUD_QUALITYCHECK_EXPORT DeleteTaskAssignRuleRequest : public RpcServiceRequest {
public:
	DeleteTaskAssignRuleRequest();
	~DeleteTaskAssignRuleRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getJsonStr() const;
	void setJsonStr(const std::string &jsonStr);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);

private:
	long resourceOwnerId_;
	std::string jsonStr_;
	std::string accessKeyId_;
};
} // namespace Model
} // namespace Qualitycheck
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_QUALITYCHECK_MODEL_DELETETASKASSIGNRULEREQUEST_H_
