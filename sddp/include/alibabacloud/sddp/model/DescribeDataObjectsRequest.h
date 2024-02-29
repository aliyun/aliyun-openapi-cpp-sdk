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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATAOBJECTSREQUEST_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATAOBJECTSREQUEST_H_

#include <alibabacloud/sddp/SddpExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sddp {
namespace Model {
class ALIBABACLOUD_SDDP_EXPORT DescribeDataObjectsRequest : public RpcServiceRequest {
public:
	DescribeDataObjectsRequest();
	~DescribeDataObjectsRequest();
	long getFileType() const;
	void setFileType(long fileType);
	std::string getRiskLevels() const;
	void setRiskLevels(const std::string &riskLevels);
	std::string getQueryName() const;
	void setQueryName(const std::string &queryName);
	long getDomainId() const;
	void setDomainId(long domainId);
	std::string getParentCategoryIds() const;
	void setParentCategoryIds(const std::string &parentCategoryIds);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getProductIds() const;
	void setProductIds(const std::string &productIds);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getServiceRegionId() const;
	void setServiceRegionId(const std::string &serviceRegionId);
	std::string getModelTagIds() const;
	void setModelTagIds(const std::string &modelTagIds);
	int getFeatureType() const;
	void setFeatureType(int featureType);
	long getFileCategoryCode() const;
	void setFileCategoryCode(long fileCategoryCode);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	long getTemplateId() const;
	void setTemplateId(long templateId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getModelIds() const;
	void setModelIds(const std::string &modelIds);

private:
	long fileType_;
	std::string riskLevels_;
	std::string queryName_;
	long domainId_;
	std::string parentCategoryIds_;
	std::string sourceIp_;
	std::string productIds_;
	int pageSize_;
	std::string lang_;
	std::string serviceRegionId_;
	std::string modelTagIds_;
	int featureType_;
	long fileCategoryCode_;
	int currentPage_;
	long templateId_;
	std::string instanceId_;
	std::string modelIds_;
};
} // namespace Model
} // namespace Sddp
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATAOBJECTSREQUEST_H_
