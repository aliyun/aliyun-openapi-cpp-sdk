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

#ifndef ALIBABACLOUD_OBJECTDET_MODEL_DETECTVEHICLEICONGESTIONREQUEST_H_
#define ALIBABACLOUD_OBJECTDET_MODEL_DETECTVEHICLEICONGESTIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/objectdet/ObjectdetExport.h>

namespace AlibabaCloud
{
	namespace Objectdet
	{
		namespace Model
		{
			class ALIBABACLOUD_OBJECTDET_EXPORT DetectVehicleICongestionRequest : public RpcServiceRequest
			{

			public:
				DetectVehicleICongestionRequest();
				~DetectVehicleICongestionRequest();

				bool getFormatResultToJson()const;
				void setFormatResultToJson(bool formatResultToJson);
				Array getRoadRegions()const;
				void setRoadRegions(const Array& roadRegions);
				std::string getOriginRequestId()const;
				void setOriginRequestId(const std::string& originRequestId);
				std::string getOssFile()const;
				void setOssFile(const std::string& ossFile);
				Array getPreRegionIntersectFeatures()const;
				void setPreRegionIntersectFeatures(const Array& preRegionIntersectFeatures);
				std::string getRequestProxyBy()const;
				void setRequestProxyBy(const std::string& requestProxyBy);
				std::string getStreamArn()const;
				void setStreamArn(const std::string& streamArn);
				std::string getImageURL()const;
				void setImageURL(const std::string& imageURL);

            private:
				bool formatResultToJson_;
				Array roadRegions_;
				std::string originRequestId_;
				std::string ossFile_;
				Array preRegionIntersectFeatures_;
				std::string requestProxyBy_;
				std::string streamArn_;
				std::string imageURL_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OBJECTDET_MODEL_DETECTVEHICLEICONGESTIONREQUEST_H_