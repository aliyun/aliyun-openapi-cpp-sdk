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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEDEVICEINFOREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEDEVICEINFOREQUEST_H_

#include <alibabacloud/cloudauth/CloudauthExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cloudauth {
namespace Model {
class ALIBABACLOUD_CLOUDAUTH_EXPORT DescribeDeviceInfoRequest : public RpcServiceRequest {
public:
	DescribeDeviceInfoRequest();
	~DescribeDeviceInfoRequest();
	std::string getUserDeviceId() const;
	void setUserDeviceId(const std::string &userDeviceId);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getExpiredStartDay() const;
	void setExpiredStartDay(const std::string &expiredStartDay);
	int getTotalCount() const;
	void setTotalCount(int totalCount);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getDeviceId() const;
	void setDeviceId(const std::string &deviceId);
	std::string getBizType() const;
	void setBizType(const std::string &bizType);
	std::string getExpiredEndDay() const;
	void setExpiredEndDay(const std::string &expiredEndDay);

private:
	std::string userDeviceId_;
	std::string sourceIp_;
	int pageSize_;
	std::string lang_;
	std::string expiredStartDay_;
	int totalCount_;
	int currentPage_;
	std::string deviceId_;
	std::string bizType_;
	std::string expiredEndDay_;
};
} // namespace Model
} // namespace Cloudauth
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEDEVICEINFOREQUEST_H_
