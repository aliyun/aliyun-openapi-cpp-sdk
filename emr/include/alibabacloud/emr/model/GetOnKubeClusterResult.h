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

#ifndef ALIBABACLOUD_EMR_MODEL_GETONKUBECLUSTERRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_GETONKUBECLUSTERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT GetOnKubeClusterResult : public ServiceResult
			{
			public:
				struct OnKubeClusterDetail
				{
					std::string kubeNamespace;
					std::string kubeClusterId;
					std::string nodeLabel;
					std::string clusterVersion;
					std::string vpcId;
					std::string clusterId;
					long createTime;
					std::string ossPath;
					std::string clusterName;
					std::string clusterType;
					std::string failReason;
					std::string clusterStatus;
				};


				GetOnKubeClusterResult();
				explicit GetOnKubeClusterResult(const std::string &payload);
				~GetOnKubeClusterResult();
				OnKubeClusterDetail getOnKubeClusterDetail()const;

			protected:
				void parse(const std::string &payload);
			private:
				OnKubeClusterDetail onKubeClusterDetail_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_GETONKUBECLUSTERRESULT_H_