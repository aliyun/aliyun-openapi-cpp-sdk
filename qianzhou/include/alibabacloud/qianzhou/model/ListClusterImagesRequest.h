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

#ifndef ALIBABACLOUD_QIANZHOU_MODEL_LISTCLUSTERIMAGESREQUEST_H_
#define ALIBABACLOUD_QIANZHOU_MODEL_LISTCLUSTERIMAGESREQUEST_H_

#include <alibabacloud/qianzhou/QianzhouExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Qianzhou {
namespace Model {
class ALIBABACLOUD_QIANZHOU_EXPORT ListClusterImagesRequest : public RoaServiceRequest {
public:
	ListClusterImagesRequest();
	~ListClusterImagesRequest();
	std::string getImage_name() const;
	void setImage_name(const std::string &image_name);
	std::string getUid() const;
	void setUid(const std::string &uid);
	std::string getCluster_id() const;
	void setCluster_id(const std::string &cluster_id);
	std::string getImage_hash() const;
	void setImage_hash(const std::string &image_hash);
	int getPage_no() const;
	void setPage_no(int page_no);
	int getPage_size() const;
	void setPage_size(int page_size);

private:
	std::string image_name_;
	std::string uid_;
	std::string cluster_id_;
	std::string image_hash_;
	int page_no_;
	int page_size_;
};
} // namespace Model
} // namespace Qianzhou
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_QIANZHOU_MODEL_LISTCLUSTERIMAGESREQUEST_H_
