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

#ifndef ALIBABACLOUD_QIANZHOU_MODEL_LISTCLUSTERDEPRECATEDAPIREQUEST_H_
#define ALIBABACLOUD_QIANZHOU_MODEL_LISTCLUSTERDEPRECATEDAPIREQUEST_H_

#include <alibabacloud/qianzhou/QianzhouExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Qianzhou {
namespace Model {
class ALIBABACLOUD_QIANZHOU_EXPORT ListClusterDeprecatedAPIRequest : public RoaServiceRequest {
public:
	ListClusterDeprecatedAPIRequest();
	~ListClusterDeprecatedAPIRequest();
	std::string getCluster_id() const;
	void setCluster_id(const std::string &cluster_id);
	int getPage_no() const;
	void setPage_no(int page_no);
	std::string getTarget_version() const;
	void setTarget_version(const std::string &target_version);
	int getPage_size() const;
	void setPage_size(int page_size);

private:
	std::string cluster_id_;
	int page_no_;
	std::string target_version_;
	int page_size_;
};
} // namespace Model
} // namespace Qianzhou
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_QIANZHOU_MODEL_LISTCLUSTERDEPRECATEDAPIREQUEST_H_
