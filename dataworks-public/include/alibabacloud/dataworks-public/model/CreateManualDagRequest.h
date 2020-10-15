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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEMANUALDAGREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEMANUALDAGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT CreateManualDagRequest : public RpcServiceRequest
			{

			public:
				CreateManualDagRequest();
				~CreateManualDagRequest();

				std::string getProjectName()const;
				void setProjectName(const std::string& projectName);
				std::string getBizdate()const;
				void setBizdate(const std::string& bizdate);
				std::string getFlowName()const;
				void setFlowName(const std::string& flowName);
				std::string getDagPara()const;
				void setDagPara(const std::string& dagPara);
				std::string getNodePara()const;
				void setNodePara(const std::string& nodePara);

            private:
				std::string projectName_;
				std::string bizdate_;
				std::string flowName_;
				std::string dagPara_;
				std::string nodePara_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEMANUALDAGREQUEST_H_