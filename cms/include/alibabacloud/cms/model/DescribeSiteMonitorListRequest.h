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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBESITEMONITORLISTREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBESITEMONITORLISTREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT DescribeSiteMonitorListRequest : public RpcServiceRequest {
public:
	DescribeSiteMonitorListRequest();
	~DescribeSiteMonitorListRequest();
	std::string getTaskType() const;
	void setTaskType(const std::string &taskType);
	int getPageSize() const;
	void setPageSize(int pageSize);
	int getPage() const;
	void setPage(int page);
	std::string getKeyword() const;
	void setKeyword(const std::string &keyword);
	std::string getTaskId() const;
	void setTaskId(const std::string &taskId);

private:
	std::string taskType_;
	int pageSize_;
	int page_;
	std::string keyword_;
	std::string taskId_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBESITEMONITORLISTREQUEST_H_
