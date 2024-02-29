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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATALIMITSETREQUEST_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATALIMITSETREQUEST_H_

#include <alibabacloud/sddp/SddpExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sddp {
namespace Model {
class ALIBABACLOUD_SDDP_EXPORT DescribeDataLimitSetRequest : public RpcServiceRequest {
public:
	DescribeDataLimitSetRequest();
	~DescribeDataLimitSetRequest();
	int getFeatureType() const;
	void setFeatureType(int featureType);
	int getResourceType() const;
	void setResourceType(int resourceType);
	std::string getParentId() const;
	void setParentId(const std::string &parentId);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getLang() const;
	void setLang(const std::string &lang);

private:
	int featureType_;
	int resourceType_;
	std::string parentId_;
	std::string sourceIp_;
	std::string lang_;
};
} // namespace Model
} // namespace Sddp
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATALIMITSETREQUEST_H_
