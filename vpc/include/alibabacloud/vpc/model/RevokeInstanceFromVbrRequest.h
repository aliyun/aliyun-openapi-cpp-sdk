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

#ifndef ALIBABACLOUD_VPC_MODEL_REVOKEINSTANCEFROMVBRREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_REVOKEINSTANCEFROMVBRREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT RevokeInstanceFromVbrRequest : public RpcServiceRequest {
public:
	RevokeInstanceFromVbrRequest();
	~RevokeInstanceFromVbrRequest();
	std::string getVbrOwnerUid() const;
	void setVbrOwnerUid(const std::string &vbrOwnerUid);
	std::string getVbrRegionNo() const;
	void setVbrRegionNo(const std::string &vbrRegionNo);
	std::vector<std::string> getVbrInstanceIds() const;
	void setVbrInstanceIds(const std::vector<std::string> &vbrInstanceIds);
	std::string getGrantType() const;
	void setGrantType(const std::string &grantType);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);

private:
	std::string vbrOwnerUid_;
	std::string vbrRegionNo_;
	std::vector<std::string> vbrInstanceIds_;
	std::string grantType_;
	std::string instanceId_;
	std::string regionId_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_REVOKEINSTANCEFROMVBRREQUEST_H_
