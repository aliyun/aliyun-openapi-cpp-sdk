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

#ifndef ALIBABACLOUD_CDN_MODEL_UPDATEFCTRIGGERREQUEST_H_
#define ALIBABACLOUD_CDN_MODEL_UPDATEFCTRIGGERREQUEST_H_

#include <alibabacloud/cdn/CdnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cdn {
namespace Model {
class ALIBABACLOUD_CDN_EXPORT UpdateFCTriggerRequest : public RpcServiceRequest {
public:
	UpdateFCTriggerRequest();
	~UpdateFCTriggerRequest();
	std::string getNotes() const;
	void setNotes(const std::string &notes);
	std::string getTriggerARN() const;
	void setTriggerARN(const std::string &triggerARN);
	std::string getSourceARN() const;
	void setSourceARN(const std::string &sourceARN);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getRoleARN() const;
	void setRoleARN(const std::string &roleARN);
	std::string getFunctionARN() const;
	void setFunctionARN(const std::string &functionARN);

private:
	std::string notes_;
	std::string triggerARN_;
	std::string sourceARN_;
	long ownerId_;
	std::string roleARN_;
	std::string functionARN_;
};
} // namespace Model
} // namespace Cdn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CDN_MODEL_UPDATEFCTRIGGERREQUEST_H_
