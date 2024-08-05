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

#ifndef ALIBABACLOUD_ARMS_MODEL_SEARCHTRACEAPPBYNAMEREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_SEARCHTRACEAPPBYNAMEREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT SearchTraceAppByNameRequest : public RpcServiceRequest {
public:
	struct Tags {
		std::string value;
		std::string key;
	};
	SearchTraceAppByNameRequest();
	~SearchTraceAppByNameRequest();
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getTraceAppName() const;
	void setTraceAppName(const std::string &traceAppName);
	std::vector<Tags> getTags() const;
	void setTags(const std::vector<Tags> &tags);

private:
	std::string regionId_;
	std::string traceAppName_;
	std::vector<Tags> tags_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_SEARCHTRACEAPPBYNAMEREQUEST_H_
