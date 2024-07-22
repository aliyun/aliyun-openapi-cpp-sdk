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

#ifndef ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTECSINSTANCESREQUEST_H_
#define ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTECSINSTANCESREQUEST_H_

#include <alibabacloud/elasticsearch/ElasticsearchExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Elasticsearch {
namespace Model {
class ALIBABACLOUD_ELASTICSEARCH_EXPORT ListEcsInstancesRequest : public RoaServiceRequest {
public:
	ListEcsInstancesRequest();
	~ListEcsInstancesRequest();
	std::string getEcsInstanceName() const;
	void setEcsInstanceName(const std::string &ecsInstanceName);
	std::string getEcsInstanceIds() const;
	void setEcsInstanceIds(const std::string &ecsInstanceIds);
	int getSize() const;
	void setSize(int size);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	int getPage() const;
	void setPage(int page);
	std::string getTags() const;
	void setTags(const std::string &tags);

private:
	std::string ecsInstanceName_;
	std::string ecsInstanceIds_;
	int size_;
	std::string vpcId_;
	int page_;
	std::string tags_;
};
} // namespace Model
} // namespace Elasticsearch
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTECSINSTANCESREQUEST_H_
