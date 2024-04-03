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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEPAGEFACEVERIFYDATAREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEPAGEFACEVERIFYDATAREQUEST_H_

#include <alibabacloud/cloudauth/CloudauthExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cloudauth {
namespace Model {
class ALIBABACLOUD_CLOUDAUTH_EXPORT DescribePageFaceVerifyDataRequest : public RpcServiceRequest {
public:
	DescribePageFaceVerifyDataRequest();
	~DescribePageFaceVerifyDataRequest();
	std::string getProductCode() const;
	void setProductCode(const std::string &productCode);
	long getCurrentPage() const;
	void setCurrentPage(long currentPage);
	std::string getStartDate() const;
	void setStartDate(const std::string &startDate);
	std::string getEndDate() const;
	void setEndDate(const std::string &endDate);
	long getSceneId() const;
	void setSceneId(long sceneId);
	long getPageSize() const;
	void setPageSize(long pageSize);

private:
	std::string productCode_;
	long currentPage_;
	std::string startDate_;
	std::string endDate_;
	long sceneId_;
	long pageSize_;
};
} // namespace Model
} // namespace Cloudauth
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEPAGEFACEVERIFYDATAREQUEST_H_
