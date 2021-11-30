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

#ifndef ALIBABACLOUD_ALB_MODEL_APPLYHEALTHCHECKTEMPLATETOSERVERGROUPREQUEST_H_
#define ALIBABACLOUD_ALB_MODEL_APPLYHEALTHCHECKTEMPLATETOSERVERGROUPREQUEST_H_

#include <alibabacloud/alb/AlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alb {
namespace Model {
class ALIBABACLOUD_ALB_EXPORT ApplyHealthCheckTemplateToServerGroupRequest : public RpcServiceRequest {
public:
	ApplyHealthCheckTemplateToServerGroupRequest();
	~ApplyHealthCheckTemplateToServerGroupRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getServerGroupId() const;
	void setServerGroupId(const std::string &serverGroupId);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getHealthCheckTemplateId() const;
	void setHealthCheckTemplateId(const std::string &healthCheckTemplateId);

private:
	std::string clientToken_;
	std::string serverGroupId_;
	bool dryRun_;
	std::string healthCheckTemplateId_;
};
} // namespace Model
} // namespace Alb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALB_MODEL_APPLYHEALTHCHECKTEMPLATETOSERVERGROUPREQUEST_H_
