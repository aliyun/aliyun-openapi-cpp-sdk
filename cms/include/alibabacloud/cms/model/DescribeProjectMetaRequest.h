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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBEPROJECTMETAREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBEPROJECTMETAREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT DescribeProjectMetaRequest : public RpcServiceRequest {
public:
	DescribeProjectMetaRequest();
	~DescribeProjectMetaRequest();
	int getPageSize() const;
	void setPageSize(int pageSize);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getLabels() const;
	void setLabels(const std::string &labels);

private:
	int pageSize_;
	int pageNumber_;
	std::string labels_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBEPROJECTMETAREQUEST_H_
