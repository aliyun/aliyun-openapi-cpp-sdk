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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBESMARTSTATISTICSPAGELISTREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBESMARTSTATISTICSPAGELISTREQUEST_H_

#include <alibabacloud/cloudauth/CloudauthExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cloudauth {
namespace Model {
class ALIBABACLOUD_CLOUDAUTH_EXPORT DescribeSmartStatisticsPageListRequest : public RpcServiceRequest {
public:
	DescribeSmartStatisticsPageListRequest();
	~DescribeSmartStatisticsPageListRequest();
	std::string getStartDate() const;
	void setStartDate(const std::string &startDate);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getPageSize() const;
	void setPageSize(const std::string &pageSize);
	std::string getCurrentPage() const;
	void setCurrentPage(const std::string &currentPage);
	std::string getEndDate() const;
	void setEndDate(const std::string &endDate);
	std::string getServiceCode() const;
	void setServiceCode(const std::string &serviceCode);
	std::string getSceneId() const;
	void setSceneId(const std::string &sceneId);

private:
	std::string startDate_;
	std::string sourceIp_;
	std::string pageSize_;
	std::string currentPage_;
	std::string endDate_;
	std::string serviceCode_;
	std::string sceneId_;
};
} // namespace Model
} // namespace Cloudauth
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBESMARTSTATISTICSPAGELISTREQUEST_H_
