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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_REGISTERLINEAGERELATIONREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_REGISTERLINEAGERELATIONREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT RegisterLineageRelationRequest : public RpcServiceRequest {
public:
	struct LineageRelationRegisterVO {
		struct DestEntity {
			std::string owner;
			std::string parentName;
			std::string entityType;
			std::string qualifiedName;
			std::string name;
			std::map<std::string, std::string> attributes;
			std::string detailUrl;
		};
		DestEntity destEntity;
		long createTimestamp;
		struct Relationship {
			std::string relationshipType;
			std::map<std::string, std::string> attributes;
			std::string relationshipGuid;
		};
		Relationship relationship;
		struct SrcEntity {
			std::string owner;
			std::string parentName;
			std::string entityType;
			std::string qualifiedName;
			std::string name;
			std::map<std::string, std::string> attributes;
			std::string detailUrl;
		};
		SrcEntity srcEntity;
	};
	RegisterLineageRelationRequest();
	~RegisterLineageRelationRequest();
	LineageRelationRegisterVO getLineageRelationRegisterVO() const;
	void setLineageRelationRegisterVO(const LineageRelationRegisterVO &lineageRelationRegisterVO);

private:
	LineageRelationRegisterVO lineageRelationRegisterVO_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_REGISTERLINEAGERELATIONREQUEST_H_
