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

#ifndef ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_MODIFYVIRTUALCLUSTERFORSPARKREQUEST_H_
#define ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_MODIFYVIRTUALCLUSTERFORSPARKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/openanalytics-open/Openanalytics_openExport.h>

namespace AlibabaCloud
{
	namespace Openanalytics_open
	{
		namespace Model
		{
			class ALIBABACLOUD_OPENANALYTICS_OPEN_EXPORT ModifyVirtualClusterForSparkRequest : public RpcServiceRequest
			{

			public:
				ModifyVirtualClusterForSparkRequest();
				~ModifyVirtualClusterForSparkRequest();

				std::string getDefaultExecutorSpecName()const;
				void setDefaultExecutorSpecName(const std::string& defaultExecutorSpecName);
				float getMaxMemory()const;
				void setMaxMemory(float maxMemory);
				std::string getSparkModuleReleaseName()const;
				void setSparkModuleReleaseName(const std::string& sparkModuleReleaseName);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				long getDefaultExecutorNumbers()const;
				void setDefaultExecutorNumbers(long defaultExecutorNumbers);
				float getMaxCpu()const;
				void setMaxCpu(float maxCpu);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getDefaultDriverSpecName()const;
				void setDefaultDriverSpecName(const std::string& defaultDriverSpecName);

            private:
				std::string defaultExecutorSpecName_;
				float maxMemory_;
				std::string sparkModuleReleaseName_;
				std::string description_;
				long defaultExecutorNumbers_;
				float maxCpu_;
				std::string name_;
				std::string defaultDriverSpecName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_MODIFYVIRTUALCLUSTERFORSPARKREQUEST_H_