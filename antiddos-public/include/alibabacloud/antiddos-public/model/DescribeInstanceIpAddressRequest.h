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

#ifndef ALIBABACLOUD_ANTIDDOS_PUBLIC_MODEL_DESCRIBEINSTANCEIPADDRESSREQUEST_H_
#define ALIBABACLOUD_ANTIDDOS_PUBLIC_MODEL_DESCRIBEINSTANCEIPADDRESSREQUEST_H_

#include <alibabacloud/antiddos-public/Antiddos_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Antiddos_public {
namespace Model {
class ALIBABACLOUD_ANTIDDOS_PUBLIC_EXPORT DescribeInstanceIpAddressRequest : public RpcServiceRequest {
public:
	DescribeInstanceIpAddressRequest();
	~DescribeInstanceIpAddressRequest();
	std::string getEagleEyeRpcId() const;
	void setEagleEyeRpcId(const std::string &eagleEyeRpcId);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getEagleEyeTraceId() const;
	void setEagleEyeTraceId(const std::string &eagleEyeTraceId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getDdosRegionId() const;
	void setDdosRegionId(const std::string &ddosRegionId);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getDdosStatus() const;
	void setDdosStatus(const std::string &ddosStatus);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getInstanceName() const;
	void setInstanceName(const std::string &instanceName);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getEagleEyeUserData() const;
	void setEagleEyeUserData(const std::string &eagleEyeUserData);
	std::string getInstanceIp() const;
	void setInstanceIp(const std::string &instanceIp);

private:
	std::string eagleEyeRpcId_;
	std::string sourceIp_;
	std::string eagleEyeTraceId_;
	int pageSize_;
	std::string ddosRegionId_;
	std::string instanceType_;
	std::string lang_;
	std::string ddosStatus_;
	int currentPage_;
	std::string instanceName_;
	std::string instanceId_;
	std::string eagleEyeUserData_;
	std::string instanceIp_;
};
} // namespace Model
} // namespace Antiddos_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ANTIDDOS_PUBLIC_MODEL_DESCRIBEINSTANCEIPADDRESSREQUEST_H_
