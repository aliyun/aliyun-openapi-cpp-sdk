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

#ifndef ALIBABACLOUD_SAS_MODEL_GETAPPNETWORKRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_GETAPPNETWORKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT GetAppNetworkResult : public ServiceResult
			{
			public:
				struct AppNetwork
				{
					struct AppNode
					{
						std::string type;
						std::vector<std::string> containerIds;
						std::string id;
						std::string namespaceId;
						std::string riskLevel;
						std::string name;
					};
					struct BasicEdge
					{
						std::string srcNodeId;
						std::string port;
						std::string id;
						std::string dstNodeType;
						std::string srcNodeType;
						std::string dstNodeId;
					};
					struct NamespaceItem
					{
						std::string id;
						std::string name;
					};
					std::vector<AppNode> node;
					std::vector<NamespaceItem> _namespace;
					std::vector<BasicEdge> edge;
				};


				GetAppNetworkResult();
				explicit GetAppNetworkResult(const std::string &payload);
				~GetAppNetworkResult();
				AppNetwork getAppNetwork()const;

			protected:
				void parse(const std::string &payload);
			private:
				AppNetwork appNetwork_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_GETAPPNETWORKRESULT_H_