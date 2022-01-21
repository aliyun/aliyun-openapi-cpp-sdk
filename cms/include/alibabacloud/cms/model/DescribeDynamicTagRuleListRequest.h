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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBEDYNAMICTAGRULELISTREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBEDYNAMICTAGRULELISTREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT DescribeDynamicTagRuleListRequest : public RpcServiceRequest {
public:
	DescribeDynamicTagRuleListRequest();
	~DescribeDynamicTagRuleListRequest();
	std::string getTagValue() const;
	void setTagValue(const std::string &tagValue);
	std::string getPageNumber() const;
	void setPageNumber(const std::string &pageNumber);
	std::string getPageSize() const;
	void setPageSize(const std::string &pageSize);
	std::string getTagKey() const;
	void setTagKey(const std::string &tagKey);
	std::string getTagRegionId() const;
	void setTagRegionId(const std::string &tagRegionId);

private:
	std::string tagValue_;
	std::string pageNumber_;
	std::string pageSize_;
	std::string tagKey_;
	std::string tagRegionId_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBEDYNAMICTAGRULELISTREQUEST_H_
