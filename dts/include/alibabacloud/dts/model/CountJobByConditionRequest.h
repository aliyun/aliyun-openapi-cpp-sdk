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

#ifndef ALIBABACLOUD_DTS_MODEL_COUNTJOBBYCONDITIONREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_COUNTJOBBYCONDITIONREQUEST_H_

#include <alibabacloud/dts/DtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dts {
namespace Model {
class ALIBABACLOUD_DTS_EXPORT CountJobByConditionRequest : public RpcServiceRequest {
public:
	CountJobByConditionRequest();
	~CountJobByConditionRequest();
	std::string getType() const;
	void setType(const std::string &type);
	std::string getSrcDbType() const;
	void setSrcDbType(const std::string &srcDbType);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string getParams() const;
	void setParams(const std::string &params);
	std::string getJobType() const;
	void setJobType(const std::string &jobType);
	std::string getDestDbType() const;
	void setDestDbType(const std::string &destDbType);
	std::string getRegion() const;
	void setRegion(const std::string &region);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string type_;
	std::string srcDbType_;
	std::string regionId_;
	std::string groupId_;
	std::string params_;
	std::string jobType_;
	std::string destDbType_;
	std::string region_;
	std::string status_;
};
} // namespace Model
} // namespace Dts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DTS_MODEL_COUNTJOBBYCONDITIONREQUEST_H_
