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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBETRACEINFONODELISTRESULT_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBETRACEINFONODELISTRESULT_H_

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
			class ALIBABACLOUD_AEGIS_EXPORT DescribeTraceInfoNodeListResult : public ServiceResult
			{
			public:
				struct NodeListInfo
				{
					struct Edge
					{
						std::string endId;
						std::string time;
						std::string startId;
					};
					struct Vertex
					{
						std::vector<std::string> neighborList;
						std::string time;
						std::string id;
						std::string name;
					};
					std::vector<std::string> entityTypeList;
					std::vector<Edge> edgeList;
					std::vector<Vertex> vertexList;
				};


				DescribeTraceInfoNodeListResult();
				explicit DescribeTraceInfoNodeListResult(const std::string &payload);
				~DescribeTraceInfoNodeListResult();
				NodeListInfo getNodeListInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				NodeListInfo nodeListInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBETRACEINFONODELISTRESULT_H_