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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTINNERNODESRESULT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTINNERNODESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT ListInnerNodesResult : public ServiceResult
			{
			public:
				struct Paging
				{
					struct NodesItem
					{
						long baselineId;
						std::string description;
						std::string resGroupName;
						std::string nodeName;
						int priority;
						std::string dqcType;
						std::string paramValues;
						long projectId;
						std::string connection;
						std::string schedulerType;
						std::string cronExpress;
						bool repeatability;
						std::string ownerId;
						std::string dqcDescription;
						long nodeId;
						std::string programType;
						long businessId;
						long repeatInterval;
					};
					int totalCount;
					int pageSize;
					int pageNumber;
					std::vector<NodesItem> nodes;
				};


				ListInnerNodesResult();
				explicit ListInnerNodesResult(const std::string &payload);
				~ListInnerNodesResult();
				Paging getPaging()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Paging paging_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTINNERNODESRESULT_H_