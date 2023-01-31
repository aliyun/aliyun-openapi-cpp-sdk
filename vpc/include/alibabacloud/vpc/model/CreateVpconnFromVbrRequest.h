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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATEVPCONNFROMVBRREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_CREATEVPCONNFROMVBRREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT CreateVpconnFromVbrRequest : public RpcServiceRequest {
public:
	CreateVpconnFromVbrRequest();
	~CreateVpconnFromVbrRequest();
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getOrderMode() const;
	void setOrderMode(const std::string &orderMode);
	std::string getVbrId() const;
	void setVbrId(const std::string &vbrId);
	std::string getToken() const;
	void setToken(const std::string &token);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);

private:
	bool dryRun_;
	std::string orderMode_;
	std::string vbrId_;
	std::string token_;
	std::string regionId_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_CREATEVPCONNFROMVBRREQUEST_H_
