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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATAOBJECTCOLUMNDETAILV2REQUEST_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATAOBJECTCOLUMNDETAILV2REQUEST_H_

#include <alibabacloud/sddp/SddpExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sddp {
namespace Model {
class ALIBABACLOUD_SDDP_EXPORT DescribeDataObjectColumnDetailV2Request : public RpcServiceRequest {
public:
	DescribeDataObjectColumnDetailV2Request();
	~DescribeDataObjectColumnDetailV2Request();
	long getProductId() const;
	void setProductId(long productId);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getId() const;
	void setId(const std::string &id);
	std::string getLang() const;
	void setLang(const std::string &lang);
	int getFeatureType() const;
	void setFeatureType(int featureType);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	long getTemplateId() const;
	void setTemplateId(long templateId);

private:
	long productId_;
	std::string sourceIp_;
	int pageSize_;
	std::string id_;
	std::string lang_;
	int featureType_;
	int currentPage_;
	long templateId_;
};
} // namespace Model
} // namespace Sddp
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATAOBJECTCOLUMNDETAILV2REQUEST_H_
