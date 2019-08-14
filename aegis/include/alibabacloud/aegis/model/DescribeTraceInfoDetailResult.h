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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBETRACEINFODETAILRESULT_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBETRACEINFODETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT DescribeTraceInfoDetailResult : public ServiceResult
			{
			public:
				struct TraceInfoDetail
				{
					struct Edge
					{
						std::string type;
						std::string endId;
						std::string time;
						int count;
						std::string startId;
					};
					struct Vertex
					{
						struct Neighbor
						{
							bool hasMore;
							std::string type;
							int count;
						};
						std::string type;
						std::vector<Vertex::Neighbor> neighborList;
						std::string time;
						int count;
						std::string id;
						std::string name;
					};
					struct EntityType
					{
						long gmtCreate;
						std::string displayColor;
						long gmtModified;
						std::string displayIcon;
						int dbId;
						std::string _namespace;
						int limit;
						std::string id;
						std::string displayTemplate;
						int offset;
						std::string name;
					};
					struct RelationType
					{
						std::string relationTypeId;
						std::string displayColor;
						int directed;
						std::string name;
						std::string showType;
					};
					std::vector<RelationType> relationTypeList;
					std::vector<EntityType> entityTypeList;
					std::vector<Edge> edgeList;
					std::vector<Vertex> vertexList;
				};


				DescribeTraceInfoDetailResult();
				explicit DescribeTraceInfoDetailResult(const std::string &payload);
				~DescribeTraceInfoDetailResult();
				TraceInfoDetail getTraceInfoDetail()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				TraceInfoDetail traceInfoDetail_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBETRACEINFODETAILRESULT_H_